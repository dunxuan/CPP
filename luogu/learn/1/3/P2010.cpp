#include <algorithm>
#include <iostream>
#include <string>
int month[13]{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int main()
{
	std::string d1, d2;
	std::cin >> d1 >> d2;
	std::string start = d1.substr(0, 4), end = d2.substr(0, 4);
	int c = 0;
	for (int i = std::stoi(start); i <= std::stoi(end); i++) {
		std::string s1 = std::to_string(i);
		std::string s2 = s1;
		std::reverse(s2.begin(), s2.end());
		std::string s = s1 + s2;
		if (s < d1 || s > d2) {
			continue;
		}
		int m = std::stoi(s2.substr(0, 2)),
		    d = std::stoi(s2.substr(2, 2));
		if (i % 4 && !i % 100 || i % 400) {
			month[2] = 29;
		}
		if ((m < 0 || m > 12) || (d < 0 || d > month[m])) {
			continue;
		}
		month[2] = 28;
		c++;
	}
	std::cout << c;
}