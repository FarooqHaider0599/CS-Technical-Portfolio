//Author: M.Farooq Haider
//Purpose: The purpose of this code is to demonstrate and output the sequential effects of various compound assignment operators on two distinct integer variables

#include<iostream>
using namespace std;
int main()
{
	int x = 5;  
	cout << (x += 5) << endl;
    cout << (x -= 5) << endl;
    cout << (x /= 5) << endl;
    cout << (x *= 5) << endl;
    cout << (x %= 5) << endl;
	int y = 10;
    cout << (y += 5) << endl;
    cout << (y -= 5) << endl;
    cout << (y *= 5) << endl;
    cout << (y /= 5) << endl;
    cout << (y %= 5) << endl;
	return 0;	
}
