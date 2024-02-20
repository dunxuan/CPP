#include <iostream>
int main()
{
	int a[7];
	for (int i = 0; i < 7; i++) {
		int m, n;
		std::cin >> m >> n;
		a[i] = m + n;
	}

	int m[2]{ 0, a[0] };
	for (int i = 1; i < 7; i++) {
		if (a[i] > m[1]) {
			m[0] = i;
			m[1] = a[i];
		}
	}

	std::cout << (m[1] > 8 ? m[0] + 1 : 0);
}