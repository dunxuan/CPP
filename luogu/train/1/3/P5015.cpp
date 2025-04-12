#include <cctype>
#include <iostream>
#include <string>
int main()
{
	std::string s;
	std::getline(std::cin, s);
	int count = 0;
	for (const auto c : s) {
		if (std::isalnum(c)) {
			count++;
		}
	}
	std::cout << count;
}