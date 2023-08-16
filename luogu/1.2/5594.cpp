#include <cstdio>
int n, m, k;
int a[1000][1000];
int main()

{
	scanf("%d %d %d", &n, &m, &k);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int b;
			scanf("%d", &b);
			a[b-1][j]++;
		}
	}

	for (int i = 0; i < k; i++) {
		int c = 0;
		for (int j = 0; j < m; j++) {
			if (a[i][j]) {
				c++;
			}
		}
		printf("%d ", c);
	}
}