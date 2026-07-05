#include<iostream>

int main()
{
	int x = 5;
	int y = 10;
	std::cout << (x += 5) << std::endl;
    std::cout << (x -= 5) << std::endl;
    std::cout << (x /= 5) << std::endl;
    std::cout << (x *= 5) << std::endl;
    std::cout << (x %= 5) << std::endl;
    std::cout << (y += 5) << std::endl;
    std::cout << (y -= 5) << std::endl;
    std::cout << (y *= 5) << std::endl;
    std::cout << (y /= 5) << std::endl;
    std::cout << (y %= 5) << std::endl;
	return 0;	
}