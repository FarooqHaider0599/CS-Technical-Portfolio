/**
 * @file     display_array.cpp
 * @author   Muhammad Farooq Haider
 * @brief    Passes a static array of student marks to a separate function 
 * to display its contents on the console.
 *
 * Course:   Introduction to Programming (CS101)
 * Semester: Spring 2026
 */

#include<iostream>
using namespace std;

void display(int arr[], int size)
{
	for(int i = 0; i < size; i++)
		cout << arr[i] << " ";
}

int main()
{
	int marks[5] = {78, 85, 90, 67, 88};
	display(marks, 5);
	cout << endl; // Added for a clean console line break
	return 0;
}
