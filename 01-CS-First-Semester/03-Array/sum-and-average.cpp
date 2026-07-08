/**
 * @file     sum-and-average.cpp
 * @author   Muhammad Farooq Haider
 * @brief    Calculates sum and average of 5 numbers entered by the user.
 *
 * Course:   Introduction to Programming (CS101)
 * Semester: Spring 2026
 */

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
