#include <iostream>
int main()
{
	long long a1, a2, n;
	std::cin >> a1 >> a2 >> n;
	long long sn = a1 * n + (a2 - a1) * n * (n - 1) / 2;
	std::cout << sn;
}