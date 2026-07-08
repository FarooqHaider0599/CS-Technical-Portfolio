//Author: M.Farooq Haider.
//Purpose: This C++ program accepts an integer input from the user, dynamically reverses the sequence of its digits, and prints the inverted result to the console.

#include<iostream>
using namespace std;
int main()
{
	int number , reverse = 0;
	cout<< "Enter a number: ";
	cin>>number;
	
	while(number != 0)
	{
		reverse = reverse * 10 + number % 10;
		number /= 10;
	}
	cout<<"Reversed number = "<< reverse;
	return 0;
}
