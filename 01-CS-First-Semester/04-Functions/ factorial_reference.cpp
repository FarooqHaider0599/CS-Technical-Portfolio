/**
 * @file      factorial_reference.cpp
 * @author    Muhammad Farooq Haider
 * @brief     Calculates and displays the factorial of an input number using pass-by-reference.
 *
 * Course:    Introduction to Programming (CS101)
 * Semester:  Spring 2026
 */

#include <iostream>
void factorial(int &n);

int main()
{
    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;
    
    factorial(x);
    
    return 0;
}

void factorial(int &n)
{
    long long fact = 1; // Upgraded to 'long long' to handle larger factorials safely
    
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    
    // FIX: Moved output outside of the loop to print only the final answer, and added missing spaces
    std::cout << "The factorial of number " << n << " is " << fact << std::endl;
}
