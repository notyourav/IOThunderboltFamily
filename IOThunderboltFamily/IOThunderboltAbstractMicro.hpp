//
//  IOThunderboltAbstractMicro.hpp
//  IOThunderboltFamily
//
//  Created by Theo on 10/18/20.
//

#ifndef IOThunderboltAbstractMicro_hpp
#define IOThunderboltAbstractMicro_hpp

#include <IOKit/IOService.h>

class IOThunderboltController;
class IOThunderboltSwitch;

class IOThunderboltAbstractMicro : OSObject {
    OSDeclareAbstractStructors(IOThunderboltAbstractMicro)

protected:
    IOThunderboltController*    _controller;
    IOThunderboltSwitch*        _switch;
    bool                        _portSet;
    bool                        _initSuccess;
    UInt32                      _index;
    bool                        _isQuiesced;
    bool                        _isMessaged;

    void setIndex(UInt32 idx) { _index = idx; }
    UInt32 getIndex(void) { return _index; }
    
public:
    OSMetaClassDeclareReservedUnused(IOThunderboltAbstractMicro, 0);
    OSMetaClassDeclareReservedUnused(IOThunderboltAbstractMicro, 1);
    OSMetaClassDeclareReservedUnused(IOThunderboltAbstractMicro, 2);
    OSMetaClassDeclareReservedUnused(IOThunderboltAbstractMicro, 3);
    OSMetaClassDeclareReservedUnused(IOThunderboltAbstractMicro, 4);
    OSMetaClassDeclareReservedUnused(IOThunderboltAbstractMicro, 5);
    OSMetaClassDeclareReservedUnused(IOThunderboltAbstractMicro, 6);
    OSMetaClassDeclareReservedUnused(IOThunderboltAbstractMicro, 7);
};

#endif /* IOThunderboltAbstractMicro_hpp */
