//Author: M.Farooq Haider
//Description:This program uses a fixed-size array to read 5 integers from the user and then displays them back on the screen. It demonstrates basic array declaration, input, and output in C++.

#include<iostream>
using namespace std;

int main()
{
	int arr[5];
	cout<<"Enter five integers"<<endl;
	cin>>arr[0];
	cin>>arr[1];
	cin>>arr[2];
	cin>>arr[3];
	cin>>arr[4];
	cout<<"The five integers are"<<endl;
	cout<<arr[0]<<"\n";
	cout<<arr[1]<<"\n";
	cout<<arr[2]<<"\n";
	cout<<arr[3]<<"\n";
	cout<<arr[4]<<"\n";
	return 0;
}
