//
//  IOThunderboltGlobals.cpp
//  IOThunderboltFamily
//
//  Created by Theo on 10/19/20.
//

#include "IOThunderboltGlobals.hpp"

class ThunderboltGlobals {
public:
    
    ThunderboltGlobals();
    ~ThunderboltGlobals();
};


UInt32 gThunderboltTraceFlags = 0;
static ThunderboltGlobals gThunderboltGlobals;

static int ThunderboltSysctl ( struct sysctl_oid* oidp, void* arg1, int arg2, struct sysctl_req* req);
SYSCTL_PROC(_debug, OID_AUTO, Thunderbolt, CTLFLAG_RW, nullptr, 0, ThunderboltSysctl, "Thunderbolt", "Thunderbolt debug interface");

static int ThunderboltSysctl (struct sysctl_oid* oidp, void* arg1, int arg2, struct sysctl_req* req) {
    int error = 0;
    ThunderboltSysctlArgs args;
    
    error = SYSCTL_IN(req, &args, sizeof(args));
    
    if (error == 0 && args.type == kThunderboltTypeDebug) {
        if (args.operation == kThunderboltOperationGetFlags) {
            args.debugFlags = gThunderboltTraceFlags;
            error = SYSCTL_OUT(req, &args, sizeof(args));
        }
        else if (args.operation == kThunderboltOperationSetFlags) {
            args.debugFlags = gThunderboltTraceFlags;
        }
        IOLog("ThunderboltSysctl: gThunderboltTraceFlags = 0x%08X error=0x%x\n", gThunderboltTraceFlags, error);
    }
    
    return error;
}

ThunderboltGlobals::ThunderboltGlobals(void) {
    int flags;

    if (PE_parse_boot_argn("tblog", &flags, sizeof(flags))) {
        int id = 36929;
        if (flags != 1)
            flags = id;
        gThunderboltTraceFlags = flags;
    }
    
    sysctl_register_oid(&sysctl__debug_Thunderbolt);
}

ThunderboltGlobals::~ThunderboltGlobals(void) {
    sysctl_unregister_oid(&sysctl__debug_Thunderbolt);
}
