#include <iostream>

int n, m;

int leftUp(char *mtx, int i, int j);
int leftDown(char *mtx, int i, int j);
int rightUp(char *mtx, int i, int j);
int rightDown(char *mtx, int i, int j);

int main(void)
{
	scanf("%d%d ", &n, &m);

	char mtx[n][m];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%c ", &mtx[i][j]);
		}
	}

	int num = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			num += (leftUp(*mtx, i, j) + leftDown(*mtx, i, j) +
				rightUp(*mtx, i, j) + rightDown(*mtx, i, j));
		}
	}

	printf("%d", num);
}

int leftUp(char *mtx, int i, int j)
{
	int num = 0;
	char c = mtx[i * m + j];
	for (int k = 1;
	     (i - k) >= 0 && (j - k) >= 0 && !(mtx[(i - k) * m + j] - c) &&
	     !(mtx[i * m + j - k] - c);
	     k++) {
		int f = 1;
		for (int x = 1; !(k - x); x++) {
			if ((mtx[(i - x) * m + j - k + x] - c)) {
				f = 0;
				break;
			}
		}
		if (f) {
			printf("leftUp:%d %d %d\n", i, j, k);
			num++;
		}
	}

	return num;
}

int leftDown(char *mtx, int i, int j)
{
	int num = 0;
	char c = mtx[i * m + j];
	for (int k = 1;
	     (i + k) < n && (j - k) >= 0 && !(mtx[(i + k) * m + j] - c) &&
	     !(mtx[i * m + j - k] - c);
	     k++) {
		int f = 1;
		for (int x = 1; !(k - x); x++) {
			if ((mtx[(i + x) * m + j - k + x] - c)) {
				f = 0;
				break;
			}
		}
		if (f) {
			printf("leftDown:%d %d %d\n", i, j, k);
			num++;
		}
	}

	return num;
}

int rightUp(char *mtx, int i, int j)
{
	int num = 0;
	char c = mtx[i * m + j];
	for (int k = 1;
	     (i - k) >= 0 && (j + k) < m && !(mtx[(i - k) * m + j] - c) &&
	     !(mtx[i * m + j + k] - c);
	     k++) {
		int f = 1;
		for (int x = 1; !(k - x); x++) {
			if ((mtx[(i - x) * m + j + k + x] - c)) {
				f = 0;
				break;
			}
		}
		if (f) {
			printf("rightUp:%d %d %d\n", i, j, k);
			num++;
		}
	}

	return num;
}

int rightDown(char *mtx, int i, int j)
{
	int num = 0;
	char c = mtx[i * m + j];
	for (int k = 1;
	     (i + k) < n && (j + k) < m && !(mtx[(i + k) * m + j] - c) &&
	     !(mtx[i * m + j + k] - c);
	     k++) {
		int f = 1;
		for (int x = 1; !(k - x); x++) {
			if ((mtx[(i + x) * m + j + k + x] - c)) {
				f = 0;
				break;
			}
		}
		if (f) {
			printf("rightDown:%d %d %d\n", i, j, k);
			num++;
		}
	}

	return num;
}