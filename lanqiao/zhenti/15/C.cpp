#include <iostream>
#include <string>
int main()
{
	int n;
	std::cin >> n;
	int c = 0;
	for (int i = 1; i <= n; i += 2) {
		std::string s = std::to_string(i);
		bool f = true;
		switch (s.size()) {
		case 8:
			if (i / 1e7) {
				f = false;
				break;
			}
		case 7:
			if (!(i / 1000000 % 10 % 2)) {
				f = false;
				break;
			}
		case 6:
			if (i / 100000 % 10 % 2) {
				f = false;
				break;
			}
		case 5:
			if (!(i / 10000 % 10 % 2)) {
				f = false;
				break;
			}
		case 4:
			if (i / 1000 % 10 % 2) {
				f = false;
				break;
			}
		case 3:
			if (!(i / 100 % 10 % 2)) {
				f = false;
				break;
			}
		case 2:
			if (i / 10 % 10 % 2) {
				f = false;
				break;
			}
		case 1:
			if (!(i % 10 % 2)) {
				f = false;
				break;
			}
		}
		if (f) {
			c++;
		}
	}
	std::cout << c;
}