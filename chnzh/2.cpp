#include <algorithm>
#include <iostream>
#include <vector>
int main()
{
	int n;
	std::cin >> n;
	std::vector<int> a;
	for (int i = 0; i < n; i++) {
		int aa;
		std::cin >> aa;
		a.push_back(aa);
	}
	if (n == 1) {
		std::cout << a[0];
		return 0;
	}
	std::sort(a.begin(), a.end());
	int m = a[1] - a[0];
	for (int i = 2; i < a.size(); i++) {
		m = std::min(m, a[i] - a[i - 1]);
	}
	std::cout << m;
}