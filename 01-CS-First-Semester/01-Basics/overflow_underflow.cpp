/**
 * @file     overflow_underflow.cpp
 * @author   Muhammad Farooq Haider
 * @brief    Demonstrates data type limits, specifically signed integer 
 * overflow and wraparound behavior using a 16-bit short integer.
 *
 * Course:   Introduction to Programming (CS101)
 * Semester: Spring 2026
 */

#include<iostream>

int main()
{
	short a = 32767;
	std::cout << a << std::endl; // Prints 32767
	
	a = a + 1; // OVERFLOW: Exceeds upper limit, wraps around to the minimum value (-32768)
	std::cout << a << std::endl;
	
	a = a - 1; // REVERSAL: Subtracting 1 brings the value back within bounds to 32767
	std::cout << a << std::endl;
	
	return 0;
}
