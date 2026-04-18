//Author: Farooq Haider
/*Purpose: "A modern C++ implementation leveraging inline Lambda expressions 
to replace traditional functions with sleek, encapsulated factorial logic."*/

#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter a number";
	cin>>num;
	
	auto factorial=[](int &n)
	{
		int i;
		long fact = 1;
		for(i =1;i<=n;i++)
		fact *=i;
		cout<<"Factorial of"<<n<<"is"<<fact;
	};
	factorial(num);
	return 0;
}