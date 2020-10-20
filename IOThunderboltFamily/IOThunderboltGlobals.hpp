//
//  IOThunderboltGlobals.hpp
//  IOThunderboltFamily
//
//  Created by Theo on 10/19/20.
//

#ifndef IOThunderboltGlobals_hpp
#define IOThunderboltGlobals_hpp

#include <mach/mach_types.h>
#include <sys/systm.h>
#include <sys/types.h>
#include <sys/sysctl.h>
#include <IOKit/IOService.h>
#include "debugging.h"
#include "IOThunderboltTimestamp.hpp"

static IOLock* gIOThunderboltJTALock = IOLockAlloc();

class Thunderbolt {

};

#define kThunderboltTypeDebug   'TBTT'

typedef struct ThunderboltSysctlArgs {
    UInt32  type;
    UInt32  operation;
    UInt32  debugFlags;
} ThunderboltSysctlArgs;
ASSERT_SIZE(ThunderboltSysctlArgs, 0xC)

#endif /* ThunderboltGlobals_hpp */
