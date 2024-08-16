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
	std::vector<std::array<int, 2> > a;
	for (int i = 0; i < 7; i++) {
		int i1, i2;
		std::cin >> i1 >> i2;
		a.push_back(std::array<int, 2>{ i + 1, i1 + i2 });
	}
	std::sort(a.begin(), a.end(), cmp);
	if (a[0][1] <= 8) {
		std::cout << 0;
	} else {
		std::cout << a[0][0];
	}
}