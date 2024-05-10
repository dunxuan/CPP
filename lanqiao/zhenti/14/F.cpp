#include <iostream>
#include <vector>
bool f;
int m, n;
std::vector<std::vector<bool> > b;
void dfs_island(int x, int y)
{
}
void dfs_sea(int x, int y)
{
	
}
int main()
{
	int t;
	std::cin >> t;
	for (int ti = 0; ti < t; ti++) {
		std::cin >> m >> n;
		std::vector<std::vector<int> > a;
		b.reserve(m);
		for (int i = 0; i < m; i++) {
			b[i].reserve(n);
			for (int j = 0; j < n; j++) {
				std::cin >> a[i][j];
			}
		}
		b.clear();
	}
}