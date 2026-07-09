/**
 * @file     greeting-name-age.cpp
 * @author   Muhammad Farooq Haider
 * @brief    Takes user's name and age as input and prints a personalized greeting.
 *
 * Course:   Introduction to Programming (CS101)
 * Semester: Spring 2026
 */

#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;

    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "\nHello " << name << "! You are " << age << " years old.\n";

    return 0;
}
