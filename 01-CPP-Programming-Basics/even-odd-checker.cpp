// Author: Farooq Haider
// Purpose: This program checks if a number is even or odd using the modulo operator.
#include<iostream>
int main ()
{
	int number;
	std::cout<<"Enter a number: ";
	std::cin>>number;
	if (number % 2 == 0)
    {
    std::cout<<"The number is even. ";
    }   
    else
    {
    std::cout<<"The number is odd. ";
	}
	return 0 ;
}
