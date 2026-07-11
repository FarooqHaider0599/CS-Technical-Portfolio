/**
 * @file      multiplication_table.cpp
 * @author    Muhammad Farooq Haider
 * @brief     Takes an integer input and displays its multiplication table from 1 to 10.
 *
 * Course:    Introduction to Programming (CS101)
 * Semester:  Spring 2026
 */

#include <iostream>

int main()
{
    int number;
    
    std::cout << "Enter a Number: "; 
    std::cin >> number;
    
    for(int i = 1; i <= 10; i++)
    {
        std::cout << number << " x " << i << " = " << number * i << std::endl;
    }
    return 0;
}
