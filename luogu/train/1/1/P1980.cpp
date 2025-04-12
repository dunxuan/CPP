#include <iostream>
int main()
{
	int n, x;
	std::cin >> n >> x;
	int result = 0;
	for (int i = 1; i <= n; i++) {
		int j = i;
		do {
			if (j % 10 == x) {
				result++;
			}
			j /= 10;
		} while (j);
	}
	std::cout << result;
}