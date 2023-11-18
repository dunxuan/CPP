#include <iostream>
#include <string>
int main()
{
	std::string s;
	std::cin >> s;
	int n = ((s[0] - 48) * 1 + (s[2] - 48) * 2 + (s[3] - 48) * 3 +
		 (s[4] - 48) * 4 + (s[6] - 48) * 5 + (s[7] - 48) * 6 +
		 (s[8] - 48) * 7 + (s[9] - 48) * 8 + (s[10] - 48) * 9) %
		11;
	if (n == s[12] - 48 || n == 10 && s[12] == 'X') {
		std::cout << "Right";
	} else {
		s.pop_back();
		s.push_back(n != 10 ? n + 48 : 'X');
		std::cout << s;
	}
}