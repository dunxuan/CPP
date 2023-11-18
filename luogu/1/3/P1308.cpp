#include <cctype>
#include <iostream>
#include <string>
int main()
{
	std::string a, b;
	std::getline(std::cin, a);
	std::getline(std::cin, b);
	for (auto &c : a) {
		c = tolower(c);
	}
	for (auto &c : b) {
		c = tolower(c);
	}

	a = ' ' + a + ' ';
	b = ' ' + b + ' ';
	if (b.find(a) == std::string::npos) {
		std::cout << -1;
	} else {
		int m = b.find(a), n = 0;
		while (m != std::string::npos) {
			n++;
			m = b.find(a, m + a.size() - 2);
		}
		std::cout << n << ' ' << b.find(a);
	}
}