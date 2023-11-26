#include <algorithm>
#include <iostream>
#include <vector>
int n, k, ans;
std::vector<int> x;
bool isPrime(int a)
{
	for (int i = 2; i * i <= a; i++) {
		if (!(a % i)) {
			return false;
		}
	}
	return true;
}
void dfs(int kk, int sum, int ii)
{
	if (kk == k) {
		if (isPrime(sum)) {
			ans++;
		}
		return;
	}
	for (int i = ii; i < n; i++) {
		dfs(kk + 1, sum + x[i], i + 1);
	}
}
int main()
{
	std::cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;
		x.push_back(a);
	}
	std::sort(x.begin(), x.end());
	dfs(0, 0, 0);
	std::cout << ans;
}