#include <algorithm>
#include <array>
#include <iostream>
#include <vector>
bool cmp(std::array<int, 4> a, std::array<int, 4> b)
{
	if (a[3] > b[3]) {
		return true;
	} else if (a[3] == b[3]) {
		if (a[2] < b[2]) {
			return true;
		} else {
			return false;
		}
	} else {
		return false;
	}
}
int main()
{
	std::vector<std::array<int, 4> > a(7);
	for (int i = 0; i < 7; i++) {
		std::cin >> a[i][0] >> a[i][1];
		a[i][2] = i;
		a[i][3] = a[i][0] + a[i][1];
	}
	std::sort(a.begin(), a.end(), cmp);
	if (a[0][3] <= 8) {
		std::cout << 0;
	} else {
		std::cout << a[0][2] + 1;
	}
}