#ifndef ALLOCATOR_H 
#define ALLOCATOR_H


#include "defines.h"
#include "baseallocator.h"


NAMESPACE_BEGIN

template <typename T>
class Allocator: public AllocatorBase<T>
{

};


NAMESPACE_END


#endif
