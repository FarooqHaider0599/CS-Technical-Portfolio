/**
 * @file multiplication_table.cpp
 * @brief A basic C++ console application that generates a multiplication table.
 * @details This program prompts the user for a single integer and utilizes a
 *          for-loop to calculate and print its multiplication table from 1 to 10
 *          using the standard output stream.
 * 
 * @author M.Farooq Haider
 * @date 2026-07-11
 */

#include <iostream>
int main()
{
    int number;
    
    std::cout << "Enter a Number: "; // Fixed the typo here as well!
    std::cin >> number;
    
    for(int i = 1; i <= 10; i++)
    {
        std::cout << number << " x " << i << " = " << number * i << std::endl;
    }
    return 0;
}
