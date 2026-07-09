#include<iostream>
using namespace std;

int countEven(int arr[], int size)
{
	int count=0;
	for(int i=0;i<size;i++)
	 if(arr[i]%2==0)
	  count++;
	return count;
}
int main()
{
	int num[5]={2,5,8,7,10}
	cout<<"Even Numbers="<<countEven(num,5);
	return 0;
}