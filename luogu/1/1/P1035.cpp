#include <iostream>
int main()
{
	int k;
	std::cin >> k;
	double n = 1, sn = 0;
	while (sn <= k) {
		sn += 1 / n++;
	}
	std::cout << n - 1;
}