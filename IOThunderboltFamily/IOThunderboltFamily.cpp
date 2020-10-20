//
//  IOThunderboltFamily.c
//  IOThunderboltFamily
//
//  Created by Theo on 10/17/20.
//

#include <mach/mach_types.h>

kern_return_t IOThunderboltFamily_start(kmod_info_t * ki, void *d);
kern_return_t IOThunderboltFamily_stop(kmod_info_t *ki, void *d);

kern_return_t IOThunderboltFamily_start(kmod_info_t * ki, void *d)
{
    return KERN_SUCCESS;
}

kern_return_t IOThunderboltFamily_stop(kmod_info_t *ki, void *d)
{
    return KERN_SUCCESS;
}
