#include<iostream>
using namespace std;
int main ()
{
	char ch;
	float num1,num2;
	
	cout<<"Enter your operator (+, -, *, /): ";
	cin>>ch;
	
	cout<<"Enter first number :";
	cin>>num1;
	
	cout<<"Enter second number :";
	cin>>num2;
	
	switch(ch)
	{
		case'+':
			cout<<"Result = "<<num1 + num2;
			break;
		case'-':
			cout<<"Result = "<<num1 - num2;
			break;
		case '*':
			cout<<"Result = "<<num1 * num2;
			break;
		case '/':
			if (num2 != 0)
			{
				cout<<"Result = "<<num1 / num2;
			}
			else
			{
				cout<<"Division by Zero not allowded! ";
			}
			break;
		default:
			cout<<"Invalid operator!";
	}
	return 0;
}