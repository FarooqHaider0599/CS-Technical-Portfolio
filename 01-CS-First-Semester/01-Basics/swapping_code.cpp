//Author: M.Farooq Haider
//Description: Demonstrates fundamental memory manipulation by swapping the values of two user-defined integers using a temporary storage variable.
#include <iostream>
using namespace std;
int main() 
{
    int firstNumber, secondNumber;

    // User Input
    cout << "Enter value of x: ";
    cin >> firstNumber;
    cout << "Enter value of y: ";
    cin >> secondNumber;

    // Display values before swapping
    cout << "\n--- Before Swapping ---" << endl;
    cout << "Value of x: " << firstNumber << endl;
    cout << "Value of y: " << secondNumber << endl;

    // Swapping logic using a temporary variable
    int temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;

    // Display values after swapping
    cout << "\n--- After Swapping ---" << endl;
    cout << "Value of x: " << firstNumber << endl;
    cout << "Value of y: " << secondNumber << endl;

    return 0;
}
