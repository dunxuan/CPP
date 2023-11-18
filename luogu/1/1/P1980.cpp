#include <iostream>
int main()
{
	int n, x;
	std::cin >> n >> x;
	int m = 0;
	for (int i = 1; i <= n; i++) {
		int ii = i;
		while (ii > 0) {
			if (ii % 10 == x) {
				m++;
			}
			ii /= 10;
		}
	}
	std::cout << m;
}