#include <algorithm>
#include <array>
#include <iostream>
#include <vector>
int main()
{
	int l, m;
	std::cin >> l >> m;
	std::vector<std::array<int, 2> > a(m);
	for (int i = 0; i < m; i++) {
		std::cin >> a[i][0] >> a[i][1];
	}
	std::sort(a.begin(), a.end());

	int total = 0;
	int start = a[0][0], end = a[0][1];

	for (const auto &[u, v] : a) {
		if (u > end) {
			total += end - start + 1;
			start = u, end = v;
		} else {
			end = std::max(v, end);
		}
	}
	total += end - start + 1;

	std::cout << (l + 1 - total);
}