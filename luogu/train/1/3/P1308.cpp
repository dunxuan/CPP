#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
int main()
{
	std::string s1, s2;
	std::getline(std::cin, s1);
	std::getline(std::cin, s2);

	std::transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	std::transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
	s1 = ' ' + s1 + ' ';
	s2 = ' ' + s2 + ' ';

	int count = 0, first = -1;

	for (auto pos = s2.find(s1); pos != std::string::npos;
	     pos = s2.find(s1, pos + 1)) {
		if (count == 0) {
			first = pos;
		}
		count++;
	}
	if (count == 0) {
		std::cout << -1;
	} else {
		std::cout << count << ' ' << first;
	}
}