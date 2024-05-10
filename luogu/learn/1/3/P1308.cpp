#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
int main()
{
	std::string s1, s2;
	std::getline(std::cin, s1);
	std::getline(std::cin, s2);
	s1 = ' ' + s1 + ' ';
	s2 = ' ' + s2 + ' ';
	std::for_each(s1.cbegin(), s1.cend(),
		      [](char c) { return tolower(c); });
	std::for_each(s2.cbegin(), s2.cend(),
		      [](char c) { return tolower(c); });
	int l = s2.find_first_of(s1), m = 1, n = s1.length();
	if (l == -1) {
		std::cout << -1;
		return 0;
	}
	while (s2.find(s1, l + n - 1) != -1) {
		m++;
	}
	std::cout << m << ' ' << l;
}