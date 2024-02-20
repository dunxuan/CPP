#include <iostream>
#include <unordered_map>
int main()
{
	int n;
	std::unordered_map<int, bool> a;
	std::cin >> n;
	int b[100];
	for (int i = 0; i < n; i++) {
		std::cin >> b[i];
		a[b[i]] = true;
	}
	int c = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[b[i] + b[j]]) {
				c++;
			}
		}
	}
	std::cout << c;
}