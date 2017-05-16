// Calculator.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

int add(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}
int mul(int x, int y) {
	return x * y;
}
int division(int x, int y) {
	return x / y;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int result;

	result = add(45, 70); 	std::cout << "add=" << result << std::endl;
	result = sub(60, 25);	std::cout << "sub=" << result << std::endl;
	result = mul(20, 70);	std::cout << "mul=" << result << std::endl;
	result = division(80, 20);	std::cout << "division=" << result << std::endl;
	return 0;
}
