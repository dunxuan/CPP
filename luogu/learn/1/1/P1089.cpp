#include <iostream>
int main()
{
	int m = 0, n = 0;
	int i;
	int x = 0;
	for (i = 0; i < 12; i++) {
		int a;
		std::cin >> a;
		if (x) {
			continue;
		}

		m += 300;
		int b = (m - a) / 100 * 100;
		m -= b + a;
		n += b;

		if (m < 0) {
			x = -i - 1;
		}
	}
	std::cout << (x ? x : m + n * 1.2);
}