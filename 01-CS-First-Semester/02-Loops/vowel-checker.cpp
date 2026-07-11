/**
 * @file      vowel_checker.cpp
 * @author    Muhammad Farooq Haider
 * @brief     Identifies whether a user-inputted character is a vowel or a consonant.
 *
 * Course:    Introduction to Programming (CS101)
 * Semester:  Spring 2026
 */

#include <iostream>

int main()
{
    char Z;
    std::cout << "Enter an Alphabet: ";
    std::cin >> Z;
    
    // FIX: Stacked the cases to remove duplicated print statements
    switch (Z)
    {
        case 'a': case 'A':
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
            std::cout << "You entered a Vowel.\n";
            break;
            
        default:
            std::cout << "You entered a Consonant.\n";
            break;
    }
    
    return 0;
}
