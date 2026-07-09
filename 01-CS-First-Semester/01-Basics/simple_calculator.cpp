/**
 * @file     simple_calculator.cpp
 * @author   Muhammad Farooq Haider
 * @brief    A simple calculator that performs basic arithmetic operations 
 * (addition, subtraction, multiplication, and division) on two user-input integers.
 *
 * Course:   Introduction to Programming (CS101)
 * Semester: Spring 2026
 */

#include<iostream>
int main()
{
    int a , b;
    std::cout << "Enter your value :";
    std::cin >> a;
    std::cout << "Enter your value :";
    std::cin >> b;
    
    float add = a + b;
    float sub = a - b;
    double div = a / b;
    double multi = a * b;
    
    std::cout << "Addition:" << add << std::endl;
    std::cout << "Subtraction:" << sub << std::endl;
    std::cout << "Division:" << div << std::endl;
    std::cout << "Mulitplication:" << multi << std::endl;
    return 0 ;
}
