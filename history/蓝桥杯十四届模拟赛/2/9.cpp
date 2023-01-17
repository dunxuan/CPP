#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n, m;

	scanf("%d %d", &n, &m);

	char mtx[n][m]{};

	getchar();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%c", &mtx[i][j]);
		}
		getchar();
	}
	// for (int i = 0; i < n; i++) {
	// 	for (int j = 0; j < m; j++) {
	// 		printf("%c", mtx[i][j]);
	// 	}
	// 	printf("\n");
	// }

	int sum = 0;
	for (int r = 1; r < n - 1; r++) {
		for (int c = 1; c < m - 1; c++) {
			char cntr = mtx[r][c];
			for (int i = 1;; i++) {
				if (r - i < 0 || c - i < 0 || r + i >= n ||
				    c + i >= n) {
					break;
				}
				if (mtx[r - i][c - i] == cntr &&
				    mtx[r - i][c + i] == cntr &&
				    mtx[r + i][c - i] == cntr &&
				    mtx[r + i][c + i] == cntr) {
					// printf("%d %d\n", r, c);
					sum++;
				}
			}
		}
	}

	printf("%d", sum);

	return 0;
}