#include <cstdio>
int main()
{
	int n;
	scanf("%d", &n);

	int a[3][2], b[3];
	for (int i = 0; i < 3; i++) {
		scanf("%d %d", &a[i][0], &a[i][1]);
		b[i] = (((a[i][0] - 1) + n) / a[i][0]) * a[i][1];
	}

	int min = b[0];
	for (int i = 1; i < 3; i++) {
		if (min > b[i]) {
			min = b[i];
		}
	}

	printf("%d", min);
}