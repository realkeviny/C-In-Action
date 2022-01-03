#ifndef _ISTACK_H
#define _ISTACK_H

const int maxStack = 16;

class IStack
{
	friend class StackSeq; // give it access to private members
public:
	IStack() : _top(0) {}
	void Push(bool i);
	bool  Pop();
	bool IsFull() const 
	{ 
		return _top >= maxStack; 
	}
	bool IsEmpty() const 
	{
		return _top == 0; 
	}
private:
	bool _arr[maxStack];
	int _top;
};

#endif