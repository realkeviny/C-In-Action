#ifndef _CALCULATOR_H
#define _CALCULATOR_H

#include <iostream>
#include "IStack.h"
#include "Input.h"

class Calculator
{
public:
	bool Execute(Input const& input);
	IStack const& GetStack()const//³£Á¿
	{
		return _stack;
	}
	bool IsAlpha()
	{
		return _isAlpha;
	}
private:
	bool Calculate(bool b1, bool b2, int token)const;
	IStack _stack;
	bool _isAlpha;
};

#endif