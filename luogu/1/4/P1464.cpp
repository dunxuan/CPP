#include <iostream>
#include <vector>
long long dp[21][21][21];
long long w(long long a, long long b, long long c)
{
	if (a <= 0 || b <= 0 || c <= 0) {
		return 1;
	} else if (a > 20 || b > 20 || c > 20) {
		return w(20, 20, 20);
	} else if (dp[a][b][c]) {
		return dp[a][b][c];
	} else if (a < b && b < c) {
		return dp[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) -
				     w(a, b - 1, c);
	} else {
		return dp[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) +
				     w(a - 1, b, c - 1) -
				     w(a - 1, b - 1, c - 1);
	}
}
int main()
{
	for (;;) {
		long long a, b, c;
		std::cin >> a >> b >> c;
		if (a == -1 && b == -1 && c == -1) {
			break;
		} else {
			std::cout << "w(" << a << ", " << b << ", " << c
				  << ") = " << w(a, b, c) << '\n';
		}
	}
}