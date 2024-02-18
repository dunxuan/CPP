#include <algorithm>
#include <iostream>
int main()
{
	int a, b[3][3]{};
	std::cin >> a;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			std::cin >> b[i][j];
		}
		b[i][2] = (a - 1 + b[i][0]) / b[i][0] * b[i][1];
	}
	int m = std::min(std::min(b[0][2], b[1][2]), b[2][2]);
	std::cout << m;
}