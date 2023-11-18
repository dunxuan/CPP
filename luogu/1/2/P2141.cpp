#include <algorithm>
#include <iostream>
#include <unordered_map>
int main()
{
	int n;
	std::cin >> n;
	int a[100];
	std::unordered_map<int, bool> b;
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
		b[a[i]] = true;
	}
	std::sort(a, a + n);
	int m = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			int k = a[i] + a[j];
			if (k < 10000 && b[k]) {
				b[k] = false;
				m++;
			}
		}
	}
	std::cout << m;
}