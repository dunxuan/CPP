#include <iostream>
int main()
{
	int n;
	std::cin >> n;

	if (n < 0) {
		std::cout << '-';
		n = -n;
	}

	bool start = true;
	while (n) {
		int i = n % 10;

		if (start) {
			if (!i) {
				n /= 10;
				continue;
			} else {
				start = false;
			}
		}

		std::cout << i;
		n /= 10;
	}
}