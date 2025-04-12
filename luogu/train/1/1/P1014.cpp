#include <iostream>
int main()
{
	int n;
	std::cin >> n;
	for (int i = 1;; i++) {
		if ((n - i) > 0) {
			n -= i;
		} else {
			if (i % 2) {
				std::cout << i - n + 1 << '/' << n;
			} else {
				std::cout << n << '/' << i - n + 1;
			}
			return 0;
		}
	}
}