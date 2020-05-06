#include <iostream>
#include "AnyType.h"
int main()
{
	AnyType anyType = 1;
	anyType = true;
	anyType = 1.7;
	try
	{
		int storedValue = anyType.toType<int>();
	}
	catch (exception& exc) {
		std::cout << exc.what();
	}
	double storedValue = anyType.toType<double>();
	return 0;
}