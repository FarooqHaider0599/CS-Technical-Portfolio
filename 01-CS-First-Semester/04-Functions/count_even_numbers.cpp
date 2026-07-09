/**
 * @file     count_even_numbers.cpp
 * @author   Muhammad Farooq Haider
 * @brief    Counts and displays the number of even elements present within a static array.
 *
 * Course:   Introduction to Programming (CS101)
 * Semester: Spring 2026
 */

#include<iostream>
using namespace std;

int countEven(int arr[], int size)
{
	int count = 0;
	for(int i = 0; i < size; i++)
	{
		if(arr[i] % 2 == 0)
			count++;
	}
	return count;
}

int main()
{
	int num[5] = {2, 5, 8, 7, 10}; // Fixed: Added missing semicolon
	cout << "Even Numbers = " << countEven(num, 5) << endl;
	return 0;
}
