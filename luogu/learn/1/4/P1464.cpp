#include <array>
#include <cstdio>
#include <iostream>
#include <vector>
long long W[21][21][21];
long long w(long long a, long long b, long long c)
{
	if (a <= 0 || b <= 0 || c <= 0) {
		return 1;
	}
	if (a > 20 || b > 20 || c > 20) {
		return w(20, 20, 20);
	}
	if (W[a][b][c]) {
		return W[a][b][c];
	}
	if (a < b && b < c) {
		return W[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) -
				    w(a, b - 1, c);
	}
	return W[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) +
			    w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
}
int main()
{
	std::vector<std::array<long long, 4> > result;
	while (true) {
		long long a, b, c;
		std::cin >> a >> b >> c;
		if (a == -1 && b == -1 && c == -1) {
			break;
		}
		result.push_back(
			std::array<long long, 4>{ a, b, c, w(a, b, c) });
	}
	for (auto i : result) {
		printf("w(%lld, %lld, %lld) = %lld\n", i[0], i[1], i[2], i[3]);
	}
}