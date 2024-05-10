#include <iostream>
#include <vector>
int main()
{
	int n;
	std::cin >> n;
	std::vector<int> m;
	for (int i = 0; i < n + 1; i++) {
		int a;
		std::cin >> a;
		m.push_back(a);
	}
	for (int i = 0; i < n + 1; i++) {
		if (m[i] == 0) {
			continue;
		}
		if (m[i] > 0) {
			if (i) {
				std::cout << '+';
			}
			if ((i == n) || (i != n && m[i] != 1)) {
				std::cout << m[i];
			}
		}
		if (m[i] < 0) {
			if (m[i] == -1 && i != n) {
				std::cout << '-';
			} else {
				std::cout << m[i];
			}
		}
		if (i < n - 1) {
			std::cout << "x^" << n - i;
		} else if (i == n - 1) {
			std::cout << 'x';
		}
	}
}