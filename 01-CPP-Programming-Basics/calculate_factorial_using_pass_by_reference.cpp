//Author:Farooq Haider
//Purpose: Calculates and displays the factorial of a number using Pass by Reference in C++.

#include<iostream>
using namespace std;
void factorial(int &n);
int main()
{
	int x;
	cout<<"Enter a number:";
	cin>>x;
	factorial(x);
	return 0;
}
void factorial (int &n)
{
	int i;
	long fact = 1;
	for(i=1;i<=n;i++)
	{
		fact *= i;
		cout<<"The factorial of number"<<n<<"is"<<fact<<endl;
	}
}