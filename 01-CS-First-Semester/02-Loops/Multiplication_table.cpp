//Author: M.Farooq Haider
//Purpose: The purpose of this code is to take an integer input from the user and generate its corresponding multiplication table from one to ten.

#include<iostream>
using namespace std;
int main()
{
	int num ;
	cout<<"Enter a Nmuber: ";
	cin>>num ;
	for(int i = 1; i <=10 ; i++)
	{
		cout<<num<<" x "<<i<<" = "<<num * i<<std::endl;
	}
	return 0;
}
