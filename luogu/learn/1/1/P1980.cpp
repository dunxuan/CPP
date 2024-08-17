#include <iostream>
int main()
{
	int n, x;
	std::cin >> n >> x;
	int m = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = i; j; j /= 10) {
			if (j % 10 == x) {
				m++;
			}
		}
	}
	std::cout << m;
}