#ifndef NEW_ALLOCATOR_H 
#define NEW_ALLOCATOR_H
#include <stddef.h>
#include "defines.h"

NAMESPACE_BEGIN

template <typename T>
class NewAllocator
{
public:
    typedef T* Pointer;
    typedef T& Reference;
    typedef const T& ConstReference;
    typedef const T* ConstPointer;
    typedef size_t SizeType;
};

NAMESPACE_END

#endif
