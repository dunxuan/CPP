#include <iostream>
int main()
{
	int n, k;
	std::cin >> n >> k;
	int a[100001]{ 1, 1 };
	for (int i = 2; i <= n; i++) {
		a[i] = i <= k ? a[i - 1] * 2 % 100003 :
				(a[i - 1] * 2 - a[i - k - 1]) % 100003;
	}
	std::cout << (a[n] + 100003) % 100003;
}