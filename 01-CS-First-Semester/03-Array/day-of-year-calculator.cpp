//Name: Farooq Haider
//Purpose: Inputs day and month then calculates total days till that date in the year 

#include<iostream>
using namepsace std;
int main()
{
	int day, month, total;
	int days_per_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
	cout<<"Enter the month number:";
	cin>> month;
	cout<,"Enter the day number:";
	cin>>day;
	total = day;
	for(int x=0; x<month-1;x++)
	{
		total += days_per_month[x];
		cout<<"The number of days in this year till date = "<<total<<endl;
		return  0;
	}
}