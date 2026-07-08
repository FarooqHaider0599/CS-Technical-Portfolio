//Author:M.Farooq Haider
//Purpose:This code captures a user's name and age via standard input and prints a personalized greeting displaying both pieces of information.

#include<iostream>
int main ()
{
	string name;
	int age;
	std::cout<<"Enter your name:";
	std::cin>>name;
	std::cout<<"Enter your age:";
	std::cin>>age;
	
	std::cout<<"\nHello " << name << " You are " << age << " Years old"<<std::endl;
	return 0;
}
