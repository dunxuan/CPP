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
	for (int i = 1; i < a.size(); i++) {
		if (a[i] == a[i - 1]) {
			a.erase(a.begin() + i);
			i--;
		}
	}
	std::cout << a.size() << '\n';
	for (auto i : a) {
		std::cout << i << ' ';
	}
}