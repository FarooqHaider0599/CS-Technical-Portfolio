//Name: Farooq Haider
//Purpose: A simple C++ program to find and display the maximum of two numbers using a user-defined function.

#include<iostream>
using namespace std;
void max(int a,int b);


int main()
{
	int x,y;
	cout<<"Enter two numbers";
	cin>>x>>y;
	max(x,y);
	return (a , b);
}
void max(int a,int b)
{
	if(a>b)
	{
	cout<<"Maximum number is"<<a<<endl;
	}
	else 
	{
	cout<<"Maximum number is"<<b<<endl;
	}
}
