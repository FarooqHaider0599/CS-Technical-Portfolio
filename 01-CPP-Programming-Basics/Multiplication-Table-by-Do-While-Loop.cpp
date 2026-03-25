//Author: M.Farooq Haider
//Purpose: Multiplication table by Do-While Loop

#include <iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter the number whom table you want: ";
	cin>>num;
    int x = 1;
    do
    {
        cout<<num<<"X"<<x<<"="<<num * x<<endl;
        x++;
    }
    while (x <= 10);
    return 0;
}
