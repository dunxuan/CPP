#include <iostream>
int main()
{
	double s = 1, n, k;
	std::cin >> k;
	for (n = 2; s <= k; n++) {
		s += 1 / n;
	}
	std::cout << n - 1;
}