#include <iostream>
#include <vector>
int main()
{
	int n;
	std::cin >> n;
	std::vector<std::vector<int> > k{ 1 };
	int p[39][39]{};
	p[0][n / 2] = 1;
	int a = 0, b = n / 2;
	for (int i = 2; i <= n * n; i++) {
		if (p[(a - 1 + n) % n][(b + 1) % n] == 0) {
			p[(a - 1 + n) % n][(b + 1) % n] = i;
			a = (a - 1 + n) % n;
			b = (b + 1) % n;
		} else {
			p[(a + 1) % n][b] = i;
			a = (a + 1) % n;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			std::cout << p[i][j] << ' ';
		}
		std::cout << '\n';
	}
}