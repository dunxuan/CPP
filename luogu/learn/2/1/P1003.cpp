#include <array>
#include <iostream>
#include <vector>
int main()
{
	int n;
	std::cin >> n;
	std::vector<std::array<int, 4> > m;
	for (int i = 0; i < n; i++) {
		int a, b, g, k;
		std::cin >> a >> b >> g >> k;
		m.push_back(std::array<int, 4>{ a, b, g, k });
	}
	int x, y;
	std::cin >> x >> y;
	int p = -1;
	for (int i = 0; i < n; i++) {
		if ((m[i][0]) <= x && (m[i][0] + m[i][2]) >= x &&
		    (m[i][1]) <= y && (m[i][1] + m[i][3]) >= y) {
			p = i + 1;
		}
	}
	std::cout << p;
}