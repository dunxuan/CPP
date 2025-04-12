#include <iostream>
int main()
{
	int k;
	std::cin >> k;
	double Sn = 0;
	double i;
	for (i = 1; Sn <= k; i++) {
		Sn += 1 / i;
	}
	std::cout << i - 1;
}