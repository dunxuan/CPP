#include <algorithm>
#include <iostream>
#include <vector>
struct ary {
	int i;
	double ans;
	std::vector<int> used;
};
std::vector<ary> c;
int ii;
int n;
std::vector<int> h;
int gcd(int m, int n)
{
	while (n) {
		int c = m;
		m = n;
		n = c % m;
	}
	return m;
}
double lcm(int m, int n)
{
	return m * n / (double)gcd(m, n);
}
void dfs(int level, std::vector<int> used, int start)
{
	if (level == 3) {
		double ans = (used[0] * used[1] * used[2]) *
			     (lcm(lcm(used[0], used[1]), used[2]) /
			      (lcm(used[0], used[1]) * lcm(used[0], used[2]) *
			       lcm(used[1], used[2])));
		c.push_back(ary{ ii, ans, used });
		return;
	}
	for (int i = start; i < n; i++) {
		used.emplace_back(h[i]);
		dfs(level + 1, used, i + 1);
		used.pop_back();
	}
}
bool cmp(ary a, ary b)
{
	if (a.ans == b.ans) {
		return a.i < b.i;
	}
	return a.ans > b.ans;
}
int main()
{
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int d;
		std::cin >> d;
		h.emplace_back(d);
	}
	dfs(0, {}, 0);
	std::sort(c.begin(), c.end(), cmp);
	std::cout << c.begin()->used[0] << ' ' << c.begin()->used[1] << ' '
		  << c.begin()->used[2];
}