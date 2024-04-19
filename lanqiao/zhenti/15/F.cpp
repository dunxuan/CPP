#include <cstdlib>
#include <iostream>
#include <vector>
int n, k;
int a[10][10];
struct local {
	bool use;
	int xnext, ynext;
};
local used[10][10];
void extracted(int &i, int &p, int &q)
{
	switch (i) {
	case 0:
		p = -1;
		q = 0;
		break;
	case 1:
		p = -1;
		q = 1;
		break;
	case 2:
		p = 0;
		q = 1;
		break;
	case 3:
		p = 1;
		q = 1;
		break;
	case 4:
		p = 1;
		q = 0;
		break;
	case 5:
		p = 1;
		q = -1;
		break;
	case 6:
		p = 0;
		q = -1;
		break;
	case 7:
		p = -1;
		q = -1;
		break;
	}
}
void dfs(int level, int kk, std::vector<int> road, int x, int y)
{
	if (level != n * n - 1 && x == n - 1 && y == n - 1) {
		return;
	}
	used[x][y].use = true;
	if (level == n * n - 1) {
		for (auto j : road) {
			std::cout << j;
		}
		exit(0);
	}
	for (int i = 0; i < 8; i++) {
		int p, q;
		extracted(i, p, q);
		if (x + p < 0 || x + p >= n || y + q < 0 || y + q >= n) {
			continue;
		}
		if (a[x + p][y + q] != (kk + 1) % k) {
			continue;
		}
		if (used[x + p][y + q].use) {
			continue;
		}
		if (i % 2) {
			if ((used[x + p][y].use && used[x + p][y].xnext == x &&
			     used[x + p][y].ynext == y + q) ||
			    (used[x][y + q].use &&
			     used[x][y + q].xnext == x + p &&
			     used[x][y + q].ynext == y)) {
				continue;
			}
		}
		used[x][y].xnext = x + p;
		used[x][y].ynext = y + q;
		road.emplace_back(i);
		dfs(level + 1, kk + 1, road, x + p, y + q);
		road.pop_back();
	}
	used[x][y].use = false;
}
int main()
{
	std::cin >> n >> k;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			std::cin >> a[i][j];
			used[i][j].use = false;
		}
	}
	dfs(0, 0, {}, 0, 0);
	std::cout << -1;
}