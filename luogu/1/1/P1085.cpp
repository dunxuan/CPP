#include <iostream>
int main()
{
	int m = 0, n = 0;
	for (int i = 0; i < 7; i++) {
		int a, b;
		std::cin >> a >> b;
		int c = a + b;
		if (c > 8 && c > m) {
			m = c;
			n = i + 1;
		}
	}
	std::cout << n;
}