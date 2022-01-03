#include "Calculator.h"
#include <cassert>

bool Calculator::Calculate(bool b1, bool b2, int token)const
{
	bool result = false;
	if (token == '&')
	{
		result = b1 && b2;
	}
	else if (token == '|')
	{
		result = b1 || b2;
	}
	return result;
}


bool Calculator::Execute(Input const& input)
{
	int token = input.Token();
	bool status = false;
	
	if (token == tokError)
	{
		std::cout << "Unknown token!\n";
	}
	else if (token == tokNumber)
	{
		if (_stack.IsFull())
		{
			std::cout << "Stack is full\n";
		}
		else
		{
			_stack.Push(input.Number());
			status = true;//成功
		}
	}
	else 
	{
		//契约:Input不能产生任何其他符号
		assert(token == '&' || token == '|' || token == '!');
		bool b2 = _stack.Pop();
		if (token == '!')
		{
			_stack.Push(!b2);
			status = true;
		}
		else
		{
			bool b1;//特例：仅当堆栈中有一个数时，两个操作数均使用这一个数
			if (_stack.IsEmpty())
			{
				b1 = b2;
			}
			else
			{
				b1 = _stack.Pop();
			}


			_stack.Push(Calculate(b1, b2, token));
			status = true;
		}
	}
	return status;
}