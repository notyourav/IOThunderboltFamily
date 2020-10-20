//
//  debugging.h
//  IOThunderboltFamily
//
//  Created by Theo on 10/19/20.
//

#ifndef debugging_h
#define debugging_h

#include <IOKit/IOLib.h> // IOLog

#define ASSERT_SIZE(type, size) \
static_assert(sizeof(type) == size, "sizeof \"#type\" != #size!");

#endif /* debugging_h */
