#include <iostream>
#include <string>
int main()
{
	std::string s;
	std::cin >> s;
	int a = ((s[0] - '0') + (s[2] - '0') * 2 + (s[3] - '0') * 3 +
		 (s[4] - '0') * 4 + (s[6] - '0') * 5 + (s[7] - '0') * 6 +
		 (s[8] - '0') * 7 + (s[9] - '0') * 8 + (s[10] - '0') * 9) %
		11;
	if (s[12] == 'X') {
		if (a == 10) {
			std::cout << "Right";
		} else {
			s[12] = a + '0';
			std::cout << s;
		}
	} else {
		if (a == s[12]) {
			std::cout << "Right";
		} else {
			s[12] = a + '0';
			std::cout << s;
		}
	}
}