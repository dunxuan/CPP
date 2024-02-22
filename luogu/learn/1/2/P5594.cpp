#include <iostream>
int main()
{
	int n, m, k;
	std::cin >> n >> m >> k;
	bool a[1000][1000]{};
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int p;
			std::cin >> p;
			a[p - 1][j] = true;
		}
	}
	for (int i = 0; i < k; i++) {
		int b = 0;
		for (int j = 0; j < m; j++) {
			if (a[i][j]) {
				b++;
			}
		}
		std::cout << b << ' ';
	}
}