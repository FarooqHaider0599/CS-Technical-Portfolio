/**
 * @file     compound_assignments.cpp
 * @author   Muhammad Farooq Haider
 * @brief    Demonstrates the sequential modifications of variables using 
 * various C++ compound assignment operators.
 *
 * Course:   Introduction to Programming (CS101)
 * Semester: Spring 2026
 */

#include<iostream>
using namespace std;

int main()
{
    int x = 5;  
    cout << (x += 5) << endl; // Outputs 10 (x is now 10)
    cout << (x -= 5) << endl; // Outputs 5  (x is now 5)
    cout << (x /= 5) << endl; // Outputs 1  (x is now 1)
    cout << (x *= 5) << endl; // Outputs 5  (x is now 5)
    cout << (x %= 5) << endl; // Outputs 0  (x is now 0)

    int y = 10;
    cout << (y += 5) << endl; // Outputs 15 (y is now 15)
    cout << (y -= 5) << endl; // Outputs 10 (y is now 10)
    cout << (y *= 5) << endl; // Outputs 50 (y is now 50)
    cout << (y /= 5) << endl; // Outputs 10 (y is now 10)
    cout << (y %= 5) << endl; // Outputs 0  (y is now 0)

    return 0;    
}
