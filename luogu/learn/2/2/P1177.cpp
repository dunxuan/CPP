#include <algorithm>
#include <iostream>
#include <vector>
int main()
{
	int n;
	std::cin >> n;
	std::vector<int> a;
	for (int i = 0; i < n; i++) {
		int ai;
		std::cin >> ai;
		a.push_back(ai);
	}
	std::sort(a.begin(), a.end());
	for (auto i : a) {
		std::cout << i << ' ';
	}
}