#include "StackSeq.h"
#include <cassert>

StackSeq::StackSeq(IStack const& stack):_iCur(0),_stack(stack)
{
}

bool StackSeq::AtEnd() const
{
	return _iCur == _stack._top;
}

void StackSeq::Advance()
{
	assert(!AtEnd());
	++_iCur;
}

bool StackSeq::GetBool()const
{
	return _stack._arr[_iCur];
}