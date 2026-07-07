//Author: M.Farooq Haider
//Purpose: This program collects five student roll numbers from the user and displays them in reverse order.
#include <iostream>
using namespace std;
// Function that receives the array and shows numbers backwards
void displayReverse(int arr[], int size) {
    cout << "Roll numbers in reverse order: ";
    for(int i = size - 1; i >= 0; i--) {   // start from last index and go down to 0
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int roll[5];   // array of 5 roll numbers
    
    // Step 1: Get 5 roll numbers from user
    for(int i = 0; i < 5; i++) {
        cout << "Enter roll number " << (i + 1) << ": ";
        cin >> roll[i];
    }
    
    // Step 2: Send the array to the function
    displayReverse(roll, 5);
    
    return 0;
}
