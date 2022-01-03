#ifndef _STACKSEQ_H
#define _STACKSEQ_H

#include "IStack.h"

class StackSeq
{
public:
	StackSeq(IStack const& stack);
	bool AtEnd() const;
	void Advance();
	bool GetBool() const;
private:
	IStack const& _stack;
	int _iCur;
};

#endif