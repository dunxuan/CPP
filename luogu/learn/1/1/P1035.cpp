#include <iostream>
int main()
{
	int k;
	std::cin >> k;
	double sn = 0;
	int i;
	for (i = 1; sn <= k; i++) {
		sn += 1.0 / i;
	}
	std::cout << i - 1;
}