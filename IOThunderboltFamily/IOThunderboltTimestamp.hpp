//
//  IOThunderboltTimestamp.hpp
//  IOThunderboltFamily
//
//  Created by Theo on 10/19/20.
//

#ifndef IOThunderboltTimestamp_hpp
#define IOThunderboltTimestamp_hpp

#include <IOKit/IOService.h>
#include <IOKit/IOTimeStamp.h>

extern UInt32 gThunderboltTraceFlags;

static inline void RecordThunderboltTimeStamp (UInt32 code, UInt32 a, UInt32 b, UInt32 c, UInt32 d) {

    if (gThunderboltTraceFlags != 0) {
        IOTimeStampConstant(code, a, b, c, d);
    }
}

enum {
    kThunderboltOperationGetFlags = 0,
    kThunderboltOperationSetFlags = 1
};

#endif /* IOThunderboltTimestamp_hpp */
