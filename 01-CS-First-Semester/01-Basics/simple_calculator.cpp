//Author:M.Farooq Haider.
//Description: A C++ simple calculator code for calculting basic arthematic operations.
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
