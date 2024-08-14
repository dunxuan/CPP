#include <algorithm>
#include <iostream>
#include <vector>
int main()
{
	int n;
	std::cin >> n;
	std::vector<int> m;
	for (int i = 0; i < 3; i++) {
		int a, b;
		std::cin >> a >> b;
		m.push_back((n + a - 1) / a * b);
	}
	std::sort(m.begin(), m.end());
	std::cout << m[0];
}