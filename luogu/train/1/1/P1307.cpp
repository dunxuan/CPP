#include <iostream>
int main()
{
	int n, m = 0;
	std::cin >> n;
	int nn = n;
	while (nn) {
		m = (m * 10) + (nn % 10);
		nn /= 10;
	}
	// if (n < 0) {
	// 	m *= -1;
	// }
	std::cout << m;
}