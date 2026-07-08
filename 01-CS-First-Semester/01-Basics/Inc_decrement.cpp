//Author: M.Farooq Haider
//Description : The program clearly displays how prefix operators modify the variable before returning its value, while postfix operators return the original value before updating it.
#include<iostream>
using namespace std;
int main()
{	
    int x = 10;
    cout<<"Pre-increment(++x):"<< ++x <<endl;
    
    cout<<"Post increment(x++):"<< x++ <<endl;// Prints 11 because the value is accessed BEFORE the increment happens
    cout<<"After Post increment(x++):"<< x << endl;/* Prints 12 because the increment finished on the previous line 
	The value was updated in memory after the last line finished*/
    
    cout<<"Pre-Decrement(--x):"<< --x <<endl;
    
    cout<<"Post-decrement(x--):"<< x-- <<endl;// Prints 11 because the value is accessed BEFORE the decrement happens
    cout<<"After Post-decrement(x--):"<< x <<endl;/* Prints 10 because the increment finished on the previous line 
	The value was updated in memory after the last line finished*/
    return 0;
}
