#ifndef ARRAY_H 
#define ARRAY_H

#include "defines.h"
#include "baseallocator.h"
#include "icollection.h"

NAMESPACE_BEGIN

template <typename T, typename Allocator = AllocatorBase<T> >
struct ArrayBase
{
    typedef typename Allocator::Pointer Pointer;
    typedef typename Allocator::Reference Reference;
    typedef typename Allocator::ConstReference ConstReference;
    typedef typename Allocator::ConstPointer ConstPointer;
    typedef typename Allocator::SizeType SizeType;


	struct ArrayImplementation: public Allocator
	{
		Pointer _firstElement;
		Pointer _lastElement;
		Pointer _endOfStorage;

		ArrayImplementation();
		ArrayImplementation(Allocator &allocator);
		ArrayImplementation(Allocator &&other);
		void SwapData(ArrayImplementation &other);
	};


};


template <typename T, typename Allocator>
ArrayBase<T, Allocator>::ArrayImplementation::ArrayImplementation():
    ArrayBase<T, Allocator>::ArrayImplementation::Allocator(),
    ArrayBase<T, Allocator>::ArrayImplementation::_firstElement(),
    ArrayBase<T, Allocator>::ArrayImplementation::_lastElement(),
    ArrayBase<T, Allocator>::ArrayImplementation::_endOfStorage(){}


template <typename T, typename Allocator >
ArrayBase<T, Allocator>::ArrayImplementation::ArrayImplementation(
        Allocator &allocator
        ):
    ArrayBase<T, Allocator>::ArrayImplementation::Allocator(allocator),
    ArrayBase<T, Allocator>::ArrayImplementation::_firstElement(),
    ArrayBase<T, Allocator>::ArrayImplementation::_lastElement(),
    ArrayBase<T, Allocator>::ArrayImplementation::_endOfStorage() {}

template <typename T, typename Allocator >
ArrayBase<T>::ArrayImplementation::ArrayImplementation(
    ArrayBase<T, Allocator>::ArrayImplementation::Allocator &&allocator
	):
    ArrayBase<T, Allocator>::ArrayImplementation::Allocator(allocator),
    ArrayBase<T, Allocator>::ArrayImplementation::_firstElement(),
    ArrayBase<T, Allocator>::ArrayImplementation::_lastElement(),
    ArrayBase<T, Allocator>::ArrayImplementation::_endOfStorage()
{

}

template <typename T, typename Allocator >
void ArrayBase<T, Allocator>::ArrayImplementation::SwapData(ArrayImplementation &other)
{

}




template <typename T>
class Array: public ICollection, ArrayBase
{
public:
    void Print() {printf("add");}
}

NAMESPACE_END
#endif
