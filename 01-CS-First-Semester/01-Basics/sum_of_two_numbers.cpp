/**
 * @file     sum_of_two_numbers.cpp
 * @author   Muhammad Farooq Haider
 * @brief    Calculates the sum of two numbers entered by the user.
 *
 * Course:   Introduction to Programming (CS101)
 * Semester: Spring 2026
 */

#include<iostream>
int main()
{
	int num1,num2,sum;
	
	std::cout<<"Enter first value: ";
	std::cin>>num1;
		
	std::cout<<"Enter second value: ";
	std::cin>>num2;
	
	sum = num1 + num2 ;
	
	std::cout<<"Sum = "<<sum<<std::endl;
	return 0;	
}
