#include <iostream>
int main()
{
	int n;
	std::cin >> n;
	int a[1001]{};
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i / 2; j++) {
			a[i] += a[j];
		}
		a[i]++;
	}
	std::cout << a[n];
}