#include <algorithm>
#include <array>
#include <iostream>
#include <vector>
bool cmp(std::array<int, 3> a, std::array<int, 3> b)
{
	if (a[2] < b[2]) {
		return true;
	} else {
		return false;
	}
}
int main()
{
	int n;
	std::cin >> n;

	std::vector<std::array<int, 3> > a(3);

	for (int i = 0; i < 3; i++) {
		std::cin >> a[i][0] >> a[i][1];
		a[i][2] = ((n + a[i][0] - 1) / a[i][0]) * a[i][1];
	}
	std::sort(a.begin(), a.end(), cmp);
	std::cout << a[0][2];
}