#include <iostream>
#include <string>
#include <vector>
int main()
{
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	int c = 0;
	for (int i = 0, j = 1; j < n; j++) {
		if (a[i] % 10 != std::to_string(a[j])[0] - '0') {
			c++;
		} else {
			i = j;
		}
	}
	std::cout << c;
}