//Author: Farooq Haider
//Purpose:A lightweight C++ utility for automated grade classification based on user-defined marks.
#include<iostream>
using namespace std;
int main()
{
	int marks;
	
	std::cout<<"Enter your marks = ";
	std::cin>>marks;
	
	if ( marks >= 90 && marks <= 100)
	std::cout<< "Grade: A";
	else if ( marks >= 80)
	std::cout<< "Grade: B";
	else if ( marks >= 70)
	std::cout<<" Grade: C";
	else if ( marks >= 60 )
	std::cout <<" Grade: D";
	else
	std::cout<<" Grade: F";
	return 0;
}
