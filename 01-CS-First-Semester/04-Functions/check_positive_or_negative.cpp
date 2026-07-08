//Author: M.Farooq Haider
//Purpose:This program prompts the user for a number, utilizes a separate function to evaluate if it is positive, negative, or zero, and prints the result from the main function.
	
#include <iostream>
#include <string>
using namespace std;
// Function now returns a string instead of printing directly
string check(int n)
{
    if (n > 0)
        return "Positive";
    else if (n < 0)
        return "Negative";
    else
        return "Zero"; // Handles the edge case where the user enters 0
}
int main()
{
    int number;
    
    cout << "Enter a number: ";
    cin >> number;
 
    string result = check(number);
    cout << "The number is: " << result << endl;
    
    return 0;
}
