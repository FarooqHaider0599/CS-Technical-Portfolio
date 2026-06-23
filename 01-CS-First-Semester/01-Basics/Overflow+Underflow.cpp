//Author:M.Farooq Haider
//Description:A C++ code focusing on Overflow and Underflow.
#include<iostream>

int main()
{
	short a = 32767;
	std::cout << a << std::endl;
	a = a + 1; //this code shows Overflow as the value exceeds max value,it shows the -ve max value
	std::cout << a << std::endl;
	a = a - 1; //this code shows Underflow as the value exceeds max value,it shows the +ve max value
	std::cout << a << std::endl;
	return 0;
}
