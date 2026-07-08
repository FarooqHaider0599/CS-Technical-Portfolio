//Author: M.Farooq Haider
//Purpose:This program calculates and displays the correct arithmetic sum of two integer values using a dedicated addition function.

#include <iostream>
using namespace std;
int add( int a,  int b) 
{
    return a + b;
}

int main()
{
     int x = 5;
     int y = 3;
     std::cout << "Sum = " << add(x, y) << std::endl;
     return 0;
}
