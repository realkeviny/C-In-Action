#include "Input.h"
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <cassert>

Input::Input()
{
	std::cin >> _buf;

	//输入的第一个字符通常容易判断是什么符号
	int c = _buf[0];

	if (std::isdigit(c))
	{
		_token = tokNumber;
	}
	else if (c == '&' || c == '|' || c == '!')
	{
		_token = c;
	}
	else
	{
		_token = tokError;
	}
}

bool Input::Number() const
{
	assert(_token == tokNumber);
	return std::atoi(_buf);//字符串转换为整数
}