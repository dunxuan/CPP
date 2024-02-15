#include <cstddef>
#include <iostream>
#include <string>
int main()
{
	for (int a = 100; a < 333; a++) {
		int b = 2 * a, c = 3 * a;

		std::string s = std::to_string(a) + std::to_string(b) +
				std::to_string(c);

		int n[10]{};
		for (char c : s) {
			n[c - '0']++;
		}

		if (n[0] > 0) {
			continue;
		}
		int i;
		for (i = 1; i < 10; i++) {
			if (n[i] != 1) {
				break;
			}
		}
		if (i != 10) {
			continue;
		}

		std::cout << a << ' ' << b << ' ' << c << '\n';
	}
}