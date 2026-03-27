//Name: M.Farooq Haider
//Purpose: A lightweight C++ console applications that calculates the factorial of a given integer

#include<iostream>
using namespace std;
int main()
{
	int number;
	long long factorial = 1;
	cout<<"Enter a number = ";
	cin>>number;
	for(int i =1; i <= number; i++ )
	{
		factorial *= i;
	}
	std::cout<<"Factorial = "<<factorial;
	return 0;
}