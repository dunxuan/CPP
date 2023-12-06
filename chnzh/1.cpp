#include <iostream>
#include <string>
int main()
{
	std::string s1, s2;
	std::getline(std::cin, s1);
	std::getline(std::cin, s2);
	std::cout << s1 + s2;
}