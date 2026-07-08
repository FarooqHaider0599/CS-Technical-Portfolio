#include<iostream>
using namespace std;

void check(int n)
{
	if(n>0)
	  cout<<"Positive";
	else
	 cout<<"Negative";
}
int main()
{
	check(-3);
	return 0;
}
