//Author: M.Farooq Haider.
//Description: A simple C++ Program for finding the factorial of the input integer.

#include<iostream>
int main()
{
	int number;
	long long factorial = 1;
	
	std::cout<<"Enter a number = ";
	std::cin>>number;
	
	for(int i =1; i <= number; i++ )
	{
		factorial *= i;
	}
	std::cout<<"Factorial = "<<factorial;
	return 0;
}
