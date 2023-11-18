#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
int main()
{
	int n;
	std::cin >> n;
	if (!n) {
		std::cout << 0;
		return 0;
	}
	std::string s = std::to_string(n), ss;
	if (s[0] == '-') {
		ss.push_back('-');
	}
	for (;;) {
		if (*s.crbegin() == '0') {
			s.pop_back();
		} else {
			break;
		}
	}
	std::copy(s.crbegin(), s.crend(), std::back_inserter(ss));
	if (s[0] == '-') {
		ss.pop_back();
	}
	std::cout << ss;
}