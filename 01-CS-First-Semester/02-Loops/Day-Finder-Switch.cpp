//Author:M.Farooq Haider
//Description:@brief Evaluates integer entries (1-7) to print the designated weekday via an optimized jump-table switch block, featuring explicit input stream verification.

#include <iostream>

using namespace std;

int main() 
{
    int dayNumber;

    cout << "Enter a number for a day (1-7): ";
    
    // Catch invalid non-integer inputs safely
    if (!(cin >> dayNumber)) 
    {
        cout << "Error: Invalid input. Please enter a numerical integer." << endl;
        return 1;
    }

    switch (dayNumber) 
    {
        case 1:
            cout << "Friday" << endl;
            break;
        case 2:
            cout << "Saturday" << endl;
            break;
        case 3:
            cout << "Sunday" << endl;
            break;
        case 4:
            cout << "Monday" << endl;
            break;
        case 5:
            cout << "Tuesday" << endl;
            break;
        case 6:
            cout << "Wednesday" << endl;
            break;
        case 7:
            cout << "Thursday" << endl;
            break;
        default:
            cout << "Invalid number. Please enter a number from 1 to 7." << endl;
            break;
    }

    return 0;
}
