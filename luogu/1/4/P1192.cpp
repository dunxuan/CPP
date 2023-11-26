#include <iostream>
int n, k;
int dp[100001];
int dfs(int nn)
{
	if (!nn) {
		return 1;
	} else if (nn < 0) {
		return 0;
	}
	if (dp[nn]) {
		return dp[nn];
	}
	for (int i = 1; i <= k; i++) {
		dp[nn] += dfs(nn - i);
	}
	if (dp[nn] >= 100003) {
		dp[nn] %= 100003;
	}
	return dp[nn];
}
int main()
{
	std::cin >> n >> k;
	dp[n] = dfs(n);
	std::cout << dp[n];
}