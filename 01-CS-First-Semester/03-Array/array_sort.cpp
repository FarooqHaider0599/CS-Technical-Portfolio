/**
 * @file      array_sort.cpp
 * @author    Muhammad Farooq Haider
 * @brief     Takes a user-defined number of elements, inputs an array, and sorts it in ascending order.
 *
 * Course:    Introduction to Programming (CS101)
 * Semester:  Spring 2026
 */

#include <iostream>
#include <vector> 

int main()
{
    int n;

    std::cout << "How many array elements you want: ";
    std::cin >> n;

    // FIX: Replaced 'int arr[n]' with std::vector to avoid illegal Variable Length Arrays (VLA)
    std::vector<int> arr(n);

    // Input
    std::cout << "Enter Array Elements: ";
    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    // Sorting in ascending order (Selection Sort)
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Output
    std::cout << "Array in Ascending Order:" << std::endl;
    for(int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
