#include <algorithm>
#include <array>
#include <cstdio>
#include <iostream>
bool cmp(std::array<int, 3> a, std::array<int, 3> b)
{
	return a[2] < b[2];
}
int main()
{
	std::array<std::array<int, 3>, 3> a = { 0, 0, 3, 0, 0, 2, 0, 0, 1 };
	std::sort(a.begin(), a.end(), cmp);
	std::cout << a[0][2];
}