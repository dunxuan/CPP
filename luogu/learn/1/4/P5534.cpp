#include <iostream>
int main()
{
	long long a1, a2, n;
	std::cin >> a1 >> a2 >> n;
	long long sn = n * ((2 * a1) + (n - 1) * (a2 - a1)) / 2;
	std::cout << sn;
}