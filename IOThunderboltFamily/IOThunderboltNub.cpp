//
//  IOThunderboltNub.cpp
//  IOThunderboltFamily
//
//  Created by Theo on 10/19/20.
//

#include "IOThunderboltNub.hpp"

#define super IOService

OSDefineAbstractStructors(IOThunderboltNub, IOService)

bool IOThunderboltNub::initWithController(IOThunderboltController* controller) {
    bool success = true;
//    if (super::init(controller)) {
//        _controller = controller;
//    }
    return success;
}


IOThunderboltController* IOThunderboltNub::getController() {
    return _controller;
}

UInt32 IOThunderboltNub::getThunderboltDepth(void) {
    return 0;
}

OSString* IOThunderboltNub::getRouteString(void) {
    return nullptr;
}

UInt32 IOThunderboltNub::getChipType(void) {
    return 0;
}

OSMetaClassDefineReservedUnused(IOThunderboltNub, 0);
OSMetaClassDefineReservedUnused(IOThunderboltNub, 1);
OSMetaClassDefineReservedUnused(IOThunderboltNub, 2);
OSMetaClassDefineReservedUnused(IOThunderboltNub, 3);
OSMetaClassDefineReservedUnused(IOThunderboltNub, 4)
OSMetaClassDefineReservedUnused(IOThunderboltNub, 5);
OSMetaClassDefineReservedUnused(IOThunderboltNub, 6);
OSMetaClassDefineReservedUnused(IOThunderboltNub, 7);
OSMetaClassDefineReservedUnused(IOThunderboltNub, 8);
OSMetaClassDefineReservedUnused(IOThunderboltNub, 9);
OSMetaClassDefineReservedUnused(IOThunderboltNub, 10);
OSMetaClassDefineReservedUnused(IOThunderboltNub, 11);
OSMetaClassDefineReservedUnused(IOThunderboltNub, 12);
OSMetaClassDefineReservedUnused(IOThunderboltNub, 13);
OSMetaClassDefineReservedUnused(IOThunderboltNub, 14);
OSMetaClassDefineReservedUnused(IOThunderboltNub, 15);
OSMetaClassDefineReservedUnused(IOThunderboltNub, 16);
OSMetaClassDefineReservedUnused(IOThunderboltNub, 17);
OSMetaClassDefineReservedUnused(IOThunderboltNub, 18);
OSMetaClassDefineReservedUnused(IOThunderboltNub, 19);
OSMetaClassDefineReservedUnused(IOThunderboltNub, 20);
OSMetaClassDefineReservedUnused(IOThunderboltNub, 21);
OSMetaClassDefineReservedUnused(IOThunderboltNub, 22);
OSMetaClassDefineReservedUnused(IOThunderboltNub, 23);
OSMetaClassDefineReservedUnused(IOThunderboltNub, 24);
OSMetaClassDefineReservedUnused(IOThunderboltNub, 25);
OSMetaClassDefineReservedUnused(IOThunderboltNub, 26);
OSMetaClassDefineReservedUnused(IOThunderboltNub, 27);
OSMetaClassDefineReservedUnused(IOThunderboltNub, 28);
OSMetaClassDefineReservedUnused(IOThunderboltNub, 29);
OSMetaClassDefineReservedUnused(IOThunderboltNub, 30);
OSMetaClassDefineReservedUnused(IOThunderboltNub, 31);
