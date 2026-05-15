//Author: Farooq Haider
/*Purpose: A C++ program to implement a simple University Fee Management System
  using function overloading to calculate semester fee, lab charges,
  and transport fee combinations.*/

#include<iostream>
using namespace std;
class Fee
{
	public:
		int total(int semesterFee)
		{
			return semesterFee;
		}
		int total(int semesterFee,int lab)
		{
			return semesterFee + lab;
		}
		int total(int semesterFee,int lab,int transport)
		{
			return semesterFee + lab + transport;
		}
};
int main()
{
	Fee f;
	int semesterFee,lab,transport;
	cout<<"Enter Semester Fee:";
	cin>>semesterFee;
	cout<<"Enter Lab Charges:";
	cin>>lab;
	cout<<"Enter Transport Fee:";
	cin>>transport;
	cout<<"Fee Only:"<<f.total(semesterFee)<<endl;
	cout<<"Fee + Lab:"<<f.total(semesterFee,lab)<<endl;
	cout<<"Fee + Lab + Transport:"<<f.total(semesterFee,lab,transport)<<endl;
	return 0;
}
