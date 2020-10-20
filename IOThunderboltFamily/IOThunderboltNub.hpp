//
//  IOThunderboltNub.hpp
//  IOThunderboltFamily
//
//  Created by Theo on 10/19/20.
//

#ifndef IOThunderboltNub_hpp
#define IOThunderboltNub_hpp

#include <IOKit/IOService.h>

class IOThunderboltController;

class IOThunderboltNub : public IOService {
    OSDeclareAbstractStructors(IOThunderboltNub)

public:
    bool initWithController(IOThunderboltController* controller);
    IOThunderboltController* getController(void);
    virtual UInt32 getThunderboltDepth(void);
    virtual OSString* getRouteString(void);
    virtual UInt32 getChipType(void);
    
private:
    IOThunderboltController* _controller;

public:
    OSMetaClassDeclareReservedUnused(IOThunderboltNub, 0);
    OSMetaClassDeclareReservedUnused(IOThunderboltNub, 1);
    OSMetaClassDeclareReservedUnused(IOThunderboltNub, 2);
    OSMetaClassDeclareReservedUnused(IOThunderboltNub, 3);
    OSMetaClassDeclareReservedUnused(IOThunderboltNub, 4);
    OSMetaClassDeclareReservedUnused(IOThunderboltNub, 5);
    OSMetaClassDeclareReservedUnused(IOThunderboltNub, 6);
    OSMetaClassDeclareReservedUnused(IOThunderboltNub, 7);
    OSMetaClassDeclareReservedUnused(IOThunderboltNub, 8);
    OSMetaClassDeclareReservedUnused(IOThunderboltNub, 9);
    OSMetaClassDeclareReservedUnused(IOThunderboltNub, 10);
    OSMetaClassDeclareReservedUnused(IOThunderboltNub, 11);
    OSMetaClassDeclareReservedUnused(IOThunderboltNub, 12);
    OSMetaClassDeclareReservedUnused(IOThunderboltNub, 13);
    OSMetaClassDeclareReservedUnused(IOThunderboltNub, 14);
    OSMetaClassDeclareReservedUnused(IOThunderboltNub, 15);
    OSMetaClassDeclareReservedUnused(IOThunderboltNub, 16);
    OSMetaClassDeclareReservedUnused(IOThunderboltNub, 17);
    OSMetaClassDeclareReservedUnused(IOThunderboltNub, 18);
    OSMetaClassDeclareReservedUnused(IOThunderboltNub, 19);
    OSMetaClassDeclareReservedUnused(IOThunderboltNub, 20);
    OSMetaClassDeclareReservedUnused(IOThunderboltNub, 21);
    OSMetaClassDeclareReservedUnused(IOThunderboltNub, 22);
    OSMetaClassDeclareReservedUnused(IOThunderboltNub, 23);
    OSMetaClassDeclareReservedUnused(IOThunderboltNub, 24);
    OSMetaClassDeclareReservedUnused(IOThunderboltNub, 25);
    OSMetaClassDeclareReservedUnused(IOThunderboltNub, 26);
    OSMetaClassDeclareReservedUnused(IOThunderboltNub, 27);
    OSMetaClassDeclareReservedUnused(IOThunderboltNub, 28);
    OSMetaClassDeclareReservedUnused(IOThunderboltNub, 29);
    OSMetaClassDeclareReservedUnused(IOThunderboltNub, 30);
    OSMetaClassDeclareReservedUnused(IOThunderboltNub, 31);
};

#endif /* IOThunderboltNub_hpp */
