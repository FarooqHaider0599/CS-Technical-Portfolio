//Name: M.Farooq Hiader
//Purpose: Inputs ages of persons and counts how many are between 50 and 60
#include<iostream>
using namespace std;
int main()
{
	int age[150], i, n, count = 0;
	cout<< "Enter the number of persons required: ";
	cin>>n;//input;
	cout<<"Enter ages of "<<n<<" persons."<<endl;
	for(i=0;i<n;i++)//Checks if the age lies in between 50 && 60;
	{
		cin>>age[i];
		if(age[i] >= 50 && age[i] <= 60)
		   count = count + 1;
	}
	cout<< count<<" persons are between 50 and 60.";//Output;
	return 0;
}
