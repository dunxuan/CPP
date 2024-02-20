#include <iostream>
int main()
{
	int n;
	std::cin >> n;
	int m = n;
	int i;
	for (i = 1; m > i; i++) {
		m -= i;
	}
	if (i % 2) {
		std::cout << i - m + 1 << '/' << m;
	} else {
		std::cout << m << '/' << i - m + 1;
	}
}