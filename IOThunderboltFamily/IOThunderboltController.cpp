//
//  IOThunderboltController.cpp
//  IOThunderboltFamily
//
//  Created by Theo on 10/19/20.
//

#include "IOThunderboltController.hpp"
#include "IOThunderboltTimestamp.hpp"

//#include <libkern/OSDebug.h>

OSDefineDefaultStructors(IOThunderboltController, IOService)

IOEventSource* IOThunderboltController::getGate(void) {
    return _gate;
}

void IOThunderboltController::shutdown(void) {
    RecordThunderboltTimeStamp(0x5340144, 0, 0, 0, 0);
}
