#include <algorithm>
#include <iostream>
#include <vector>

int n, a[10];
std::vector<int> b[10];
std::vector<int> res;
void dfs(int nn, std::vector<int> c)
{
	if (nn == n) {
		std::sort(c.begin(), c.end());
		int ans = c[0];
		for (int i = 1; i < n; i++) {
			if (c[i] == c[i - 1]) {
				return;
			}
			ans += c[i];
			// std::cout << c[i] << ' ';
		}
		// std::cout << ans << '\n';
		res.push_back(ans);
		return;
	}
	for (int i = 0; i < b[nn].size(); i++) {
		c.push_back(b[nn][i]);
		dfs(nn + 1, c);
		c.pop_back();
	}
	return;
}
int main()
{
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
		for (int j = 2; j < a[i]; j++) {
			if (a[i] % j != 0) {
				continue;
			}
			int k;
			for (k = 2; k * k <= j; k++) {
				if (j % k == 0) {
					break;
				}
			}
			if (k * k > j) {
				b[i].push_back(j);
			}
		}
	}
	dfs(0, {});
	std::sort(res.begin(), res.end());

	if (res.empty()) {
		std::cout << -1;
	} else {
		std::cout << res.front();
	}

	// for (auto i : b) {
	// 	for (auto j : i) {
	// 		std::cout << j << ' ';
	// 	}
	// 	std::cout << '\n';
	// }
}