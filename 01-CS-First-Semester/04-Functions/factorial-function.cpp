//Author:M.Farooq Haider
//Purpose: A light weight C++ program that calculates factorial of number

#include<iostream>
using namespace std;
void factorial(int n);

int main()
{
	int x;
	cout<<"Enter a number:";
	cin>>x;
	factorial(x);
	return 0;
}
void factorial (int n)
{
	long fact = 1;
	for(int i=1;i<=n;i++)
	{
		fact *= i;
		cout<<"The factorial of number"<<n<<"is"<<fact<<endl;
	}
}
