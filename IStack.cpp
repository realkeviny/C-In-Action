#include "IStack.h"
#include <cassert>

void IStack::Push(bool i)
{
	assert(_top < maxStack);
	_arr[_top] = i;
	++_top;
}

bool IStack::Pop()
{
	assert(_top > 0);
	--_top;
	return _arr[_top];
}