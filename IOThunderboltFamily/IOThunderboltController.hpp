//
//  IOThunderboltController.hpp
//  IOThunderboltFamily
//
//  Created by Theo on 10/19/20.
//

#ifndef IOThunderboltController_hpp
#define IOThunderboltController_hpp

#include <IOKit/IOService.h>
#include <IOKit/IOEventSource.h>
#include "IOThunderboltGlobals.hpp"

class IOThunderboltController : public IOService {
    OSDeclareDefaultStructors(IOThunderboltController)
    
public:
    IOEventSource* getGate(void);
    void shutdown(void);

private:
    IOEventSource* _gate;
};

#endif /* IOThunderboltController_hpp */
