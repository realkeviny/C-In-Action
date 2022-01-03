#include "Input.h"
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <cassert>

Input::Input()
{
	std::cin >> _buf;

	//����ĵ�һ���ַ�ͨ�������ж���ʲô����
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
	return std::atoi(_buf);//�ַ���ת��Ϊ����
}