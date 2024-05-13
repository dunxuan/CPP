#include <iostream>
#include <vector>
int l, n, m;
bool check(std::vector<int> rock, int x)
{
	int remove = 0, last = 0;
	rock.emplace_back(l);
	for (auto i : rock) {
		if (i - last < x) {
			remove++;
			if (remove > m) {
				return false;
			}
		} else {
			last = i;
		}
	}
	return true;
}
int main()
{
	std::cin >> l >> n >> m;
	std::vector<int> rock(n);
	for (int i = 0; i < n; i++) {
		std::cin >> rock[i];
	}
	int left = 0, right = l;
	int ans;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (check(rock, mid)) {
			ans = mid;
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}
	std::cout << ans;
}