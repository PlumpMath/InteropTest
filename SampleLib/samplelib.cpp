#include <iostream>
#include "samplelib.h"
#include "time.h"

int Test()
{
	std::cout << "Calling Add(2, 3)" << std::endl;
	int res = Add(2, 3);
	std::cout << "Calling Sub(5, 1)" << std::endl;
	return Sub(res, 1);
}

int Add(int a, int b)
{
	return a + b;
}

int Sub(int a, int b)
{
	return a - b;
}

