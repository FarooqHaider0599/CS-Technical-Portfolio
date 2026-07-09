/**
 * @file     variable_swap.cpp
 * @author   Muhammad Farooq Haider
 * @brief    Demonstrates fundamental memory manipulation by swapping the values 
 * of two user-defined integers using a temporary storage variable.
 *
 * Course:   Introduction to Programming (CS101)
 * Semester: Spring 2026
 */

#include <iostream>

int main() 
{
    int firstNumber, secondNumber;

    // User Input
    std::cout << "Enter first number: ";
    std::cin >> firstNumber;
    std::cout << "Enter second number: ";
    std::cin >> secondNumber;

    // Display values before swapping
    std::cout << "\n--- Before Swapping ---" << endl;
    std::cout << "First Number: " << firstNumber << endl;
    std::cout << "Second Number: " << secondNumber << endl;

    // Swapping logic using a temporary variable
    int temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;

    // Display values after swapping
    std::cout << "\n--- After Swapping ---" << endl;
    std::cout << "First Number: " << firstNumber << endl;
    std::cout << "Second Number: " << secondNumber << endl;

    return 0;
}
