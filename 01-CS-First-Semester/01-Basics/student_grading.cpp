/**
 * @file     student_grading.cpp
 * @author   Muhammad Farooq Haider
 * @brief    Determines and displays a student's letter grade based on an 
 * integer marks input using an if-else if structure.
 *
 * Course:   Introduction to Programming (CS101)
 * Semester: Spring 2026
 */

#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"Enter your marks = ";
	cin>>marks;
	
	if ( marks >= 90 && marks <= 100)
	  cout<< "Grade: A";
	else if ( marks >= 80)
	  cout<< "Grade: B";
	else if ( marks >= 70)
	  cout<<" Grade: C";
	else if ( marks >= 60 )
	  cout <<" Grade: D";
	else
	  cout<<" Grade: F";
	return 0;
}
