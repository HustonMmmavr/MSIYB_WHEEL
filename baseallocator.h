#ifndef ALLOCATOR_BASE_H 
#define ALLOCATOR_BASE_H

#include "defines.h"
#include "new_allocator.h"

NAMESPACE_BEGIN

template <typename T>
using AllocatorBase = NewAllocator<T>;

NAMESPACE_END
#endif