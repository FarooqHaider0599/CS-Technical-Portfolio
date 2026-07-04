#include<iostream>

int main()
{
	int number , reverse = 0;
	
	std::cout<< "Enter a number: ";
	std::cin>>number;
	
	while(number != 0)
	{
		reverse = reverse * 10 + number % 10;
		number /= 10;
	}
	std::cout<<"Reversed number = "<< reverse;
	
	return 0;
}