#include <iostream>
int main()
{
	int n;
	std::cin >> n;
	int a = 1, b = 1, j = 1, k = 1;
	for (int i = 1; i < n; i++) {
		if (i == j) {
			j += ++k;
			k % 2 ? a++ : b++;
		} else {
			a += k % 2 ? -1 : +1;
			b += k % 2 ? +1 : -1;
		}
	}
	std::cout << a << '/' << b;
}