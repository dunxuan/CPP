#include <cstdio>
int main()
{
	int m, n;
	scanf("%d %d", &n, &m);

	bool l[10000]{};
	for (int i = 0; i < m; i++) {
		int u, v;
		scanf("%d %d", &u, &v);
		for (int i = u; i <= v; i++) {
			l[i] = true;
		}
	}

	int cnt = 0;
	for (int i = 0; i <= n; i++) {
		if (!l[i]) {
			cnt++;
		}
	}
	printf("%d", cnt);
}