#include <iostream>
int main()
{
	int l, m;
	std::cin >> l >> m;
	bool a[10000]{};
	for (int i = 0; i < m; i++) {
		int u, v;
		std::cin >> u >> v;
		for (int i = u; i <= v; i++) {
			a[i] = true;
		}
	}
	int c = 0;
	for (int i = 0; i <= l; i++) {
		if (!a[i]) {
			c++;
		}
	}
	std::cout << c;
}