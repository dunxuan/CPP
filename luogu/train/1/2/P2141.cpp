#include <iostream>
#include <unordered_set>
#include <vector>
int main()
{
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	std::unordered_set<int> b;
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
		b.insert(a[i]);
	}

	std::unordered_set<int> c;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			int k = a[i] + a[j];
			if (b.count(k) && !c.count(k)) {
				c.insert(k);
			}
		}
	}

	std::cout << c.size();
}