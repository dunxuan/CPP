#include <iostream>
#include <unordered_map>
std::unordered_map<int, int> dp;
int dfs(int n)
{
	if (n == 1) {
		return 1;
	}
	if (dp.find(n) != dp.end()) {
		return dp[n];
	}
	int count = 1;
	for (int i = 1; i <= n / 2; i++) {
		count += dfs(i);
	}
	dp[n] = count;
	return count;
}
int main()
{
	int n;
	std::cin >> n;
	std::cout << dfs(n);
}