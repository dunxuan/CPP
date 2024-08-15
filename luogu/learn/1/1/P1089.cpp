#include <iostream>
#include <vector>
int main()
{
	int n = 0, m = 0;
	std::vector<int> a(12);

	for (int i = 0; i < 12; i++) {
		std::cin >> a[i];
	}

	for (int i = 0; i < 12; i++) {
		n += 300 - a[i];
		if (n < 0) {
			std::cout << -i - 1;
			return 0;
		}
		m += n / 100 * 100;
		n %= 100;
	}
	std::cout << m * 1.2 + n;
}