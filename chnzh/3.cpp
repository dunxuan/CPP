#include <iostream>
int main()
{
	int n, m;
	std::cin >> n >> m;
	int a = n % 10 * m % 10;
	if (a % 2) {
		std::cout << "akai";
	} else {
		std::cout << "yukari";
	}
}