//Author: M.Farooq Haider
//Purpose: This C++ program prompts the user to enter an integer number and determines whether it is even or odd using the modulo operator (%).
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
