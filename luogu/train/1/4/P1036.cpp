#include <iostream>
#include <vector>
int n, k;

std::vector<int> x;
bool isprime(int n)
{
	for (int i = 2; i * i <= n; i++) {
		if (!(n % i)) {
			return false;
		}
	}
	return true;
}
int dfs(int level, int start, int sum)
{
	if (level == k) {
		if (isprime(sum)) {
			return 1;
		}
		return 0;
	}
	if (n - start < k - level) {
		return 0;
	}
	int count = 0;
	for (int i = start; i < n; i++) {
		count += dfs(level + 1, i + 1, sum + x[i]);
	}
	return count;
}
int main()
{
	std::cin >> n >> k;
	x.resize(n);
	for (int i = 0; i < n; i++) {
		std::cin >> x[i];
	}
	std::cout << dfs(0, 0, 0);
}