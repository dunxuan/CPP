#include <iostream>
int n, k;
int x[20];
int ans;
bool isPrime(int a)
{
	for (int i = 2; i * i <= a; i++) {
		if (!(a % i)) {
			return false;
		}
	}
	return true;
}
void dfs(int level, int sum, int start)
{
	if (level == k) {
		if (isPrime(sum)) {
			ans++;
		}
		return;
	}
	for (int i = start; i < n; i++) {
		dfs(level + 1, sum + x[i], i + 1);
	}
}
int main()
{
	std::cin >> n >> k;

	for (int i = 0; i < n; i++) {
		std::cin >> x[i];
	}
	dfs(0, 0, 0);
	std::cout << ans;
}