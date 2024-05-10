#include <iostream>
int n, k;
int ans;
void dfs(int level, int diff, int start)
{
	if (level == k) {
		if (!diff) {
			ans++;
		}
		return;
	}
	for (int i = start; i <= diff; i++) {
		dfs(level + 1, diff - i, i);
	}
}

int main()
{
	std::cin >> n >> k;
	dfs(0, n, 1);
	std::cout << ans;
}