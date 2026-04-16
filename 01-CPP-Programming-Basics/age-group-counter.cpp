//Name: Farooq Hiader
//Purpose: Inputs ages of persons and counts how many are between 50 and 60

#include<iostream>
using namespace std;
int main()
{
	int age[150], i, n, count = 0;
	cout<< "Enter the numbers of persons required: ";
	cin>>n;
	cout<<"Enter ages of"<<n<<"persons."<<end;
	for(i = o;i<n;i++)
	{
		cin>>age[i];
		if(age[i] >= 50 && age[i] <= 60)
		   count = count + 1;
	}
	cout<< count<<" persons are between 50 and 60."
	return 0;
}

