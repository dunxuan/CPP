#include <algorithm>
#include <iostream>
#include <vector>
int main()
{
	int n;
	std::cin >> n;
	std::vector<int> mi, ma;
	for (int i = 0; i < n; i++) {
		int a, b;
		std::cin >> a >> b;
		mi.emplace_back(a / (b + 1));
		ma.emplace_back(a / b);
	}
	int u = mi[0], v = ma[0];
	for (auto i : mi) {
		u = std::max(u, i);
	}
	for (auto i : ma) {
		v = std::min(v, i);
	}
	std::cout << u + 1 << ' ' << v;
}