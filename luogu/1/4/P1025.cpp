#include <iostream>
int n, k;
int ans;
void dfs(int kk, int ki, int sum)
{
	if (kk == k) {
		if (sum == n) {
			ans++;
		}
		return;
	}
	for (int i = ki; i <= n - sum; i++) {
		dfs(kk + 1, i, sum + i);
	}
	return;
}
int main()
{
	std::cin >> n >> k;
	dfs(0, 1, 0);
	std::cout << ans;
}