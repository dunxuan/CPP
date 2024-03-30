#include <algorithm>
#include <array>
#include <iostream>
#include <vector>
bool cmp(std::array<int, 2> a, std::array<int, 2> b)
{
	if (a[1] == b[1]) {
		return a[0] < b[0];
	}
	return a[1] > b[1];
}
int main()
{
	int n, m;
	std::cin >> n >> m;
	std::vector<std::array<int, 2> > a;
	for (int i = 0; i < n; i++) {
		int ai, aj;
		std::cin >> ai >> aj;
		a.push_back(std::array<int, 2>{ ai, aj });
	}
	std::sort(a.begin(), a.end(), cmp);
	int score = a[m * 1.5 - 1][1];
	std::vector<std::array<int, 2> > b;
	for (auto it : a) {
		if (it[1] >= score) {
			b.push_back(it);
		}
	}
	std::cout << score << ' ' << b.size() << '\n';
	for (auto it : b) {
		std::cout << it[0] << ' ' << it[1] << '\n';
	}
}