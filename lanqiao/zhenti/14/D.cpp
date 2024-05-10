#include <array>
#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
std::vector<std::array<int, 3> > tdl;
bool f;
void dfs(std::unordered_set<int> used, int sum, int n)
{
	if (used.size() == n) {
		if (sum) {
			f = true;
		}
	}
	for (int i = 0; i < n; i++) {
		if (used.find(i) != used.end() || sum > tdl[i][0] + tdl[i][1]) {
			continue;
		}
		used.emplace(i);
		dfs(used, sum + tdl[i][2], n);
		used.erase(i);
	}
}
int main()
{
	int t;
	std::cin >> t;
	std::vector<std::string> s;
	for (int ti = 0; ti < t; ti++) {
		int n;
		std::cin >> n;
		tdl.reserve(n);
		for (int ni = 0; ni < n; ni++) {
			std::cin >> tdl[ni][0] >> tdl[ni][1] >> tdl[ni][2];
		}
		f = false;
		dfs({}, 0, n);
		tdl.clear();
		if (f) {
			s.emplace_back("YES");
		} else {
			s.emplace_back("NO");
		}
	}
	for (auto i : s) {
		std::cout << i << '\n';
	}
}