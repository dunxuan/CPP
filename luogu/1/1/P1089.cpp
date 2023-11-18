#include <iostream>
int main()
{
	int m = 0, result = 0;
	double n = 0;
	for (int i = 0; i < 12; i++) {
		m += 300;
		int a;
		std::cin >> a;
		if ((m -= a) < 0 && !result) {
			result = -i - 1;
		}
		n += m / 100 * 100;
		m -= m / 100 * 100;
	}
	if (!result) {
		result = n * 1.2 + m;
	}
	std::cout << result;
}