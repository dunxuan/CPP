#include <iostream>
int main()
{
	int n, m, k;
	std::cin >> n >> m >> k;
	static int a[1000][1000];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int aa;
			std::cin >> aa;
			a[aa - 1][j]++;
		}
	}
	for (int i = 0; i < k; i++) {
		int result = 0;
		for (int j = 0; j < m; j++) {
			if (a[i][j]) {
				result++;
			}
		}
		std::cout << result << ' ';
	}
}