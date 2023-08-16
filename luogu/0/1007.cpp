#include <cstdio>
int main()
{
	for (int i = 100; i < 333; i++) {
		int j = 2 * i, k = 3 * i;
		int a[10]{};
		a[i / 100]++;
		a[i / 10 % 10]++;
		a[i % 10]++;
		a[j / 100]++;
		a[j / 10 % 10]++;
		a[j % 10]++;
		a[k / 100]++;
		a[k / 10 % 10]++;
		a[k % 10]++;
		int m;
		for (m = 1; m < 10; m++) {
			if (a[m] != 1) {
				break;
			}
		}
		if (m == 10) {
			printf("%d %d %d\n", i, j, k);
		}
	}
}