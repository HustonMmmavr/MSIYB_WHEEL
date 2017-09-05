#ifndef ARRAY_H 
#define ARRAY_H

#include "defines.h"
#include "allocator.h"
#include "icollection.h"

NAMESPACE_BEGIN

template <typename T>
class ArrayBase
{

};

template <typename T>
class Array: public ICollection
{

}

NAMESPACE_END
#endif