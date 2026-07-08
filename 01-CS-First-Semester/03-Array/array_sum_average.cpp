//Author: M.Farooq Haider
//Purpose: Input five values,stores in array and display sum and average

#include<iostream>
using namespace std;
int main()
{
	int arr[5],sum = 0;
	float avg = 0.0;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter Value:";
		cin>>arr[i];
		sum = sum + arr[i];
	}
	avg = sum / 5.0;
	cout<<"sum is"<<sum<<endl;
	cout<<"Average is"<<avg;
	return 0;
}
