//Author: Farooq Haider
//Purpose: A C++ program that identifies whether a user-inputted character is a vowel or a consonant.

#include<iostream>
using namespace std;
int main()
{
    char Z;
    cout<<"Enter a Alphabet: ";
    cin>>Z;
    switch (Z)
    {
        case 'a':
        case 'A':
        cout<<"You entered a Vowel";
        break;
        case 'e':
        case 'E':
        cout<<"You entered a Vowel";
        break;
        case 'i':
        case 'I':
        cout<<"You entered a Vowel";
        break;
        case 'o':
        case 'O':
        cout<<"YOu entered a Vowel";
        break;
        case 'u':
        case 'U':
        cout<<"You entered a Vowel";
        break;
        default:
        cout<<"Not Vowel";
        break;
    }
}