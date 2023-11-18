#include <iostream>
int main()
{
	int l, m;
	bool a[10000]{};
	std::cin >> l >> m;
	for (int i = 0; i < m; i++) {
		int u, v;
		std::cin >> u >> v;
		for (int i = u; i <= v; i++) {
			a[i]=true;
		}
	}
	int result = 0;
	for (int i = 0; i <= l; i++) {
		if (!a[i]) {
			result++;
		}
	}
	std::cout << result;
}