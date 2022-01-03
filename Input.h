#ifndef _INPUT_H
#define _INPUT_H

const int maxBuf = 100;

//����ΪtokNumber,tokError,+,-,*,/
const int tokNumber = 1;
const int tokError = 2;

//stdin������롢ת�������

class Input
{
public:
	Input();
	int Token() const
	{
		return _token;
	}
	bool Number() const;
private:
	int _token;
	char _buf[maxBuf];
};

#endif