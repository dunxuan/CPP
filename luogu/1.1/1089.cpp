#include <cstdio>
#include <iostream>
int main()
{
	int a[12];
	for (int i = 0; i < 12; i++) {
		scanf("%d", &a[i]);
	}

	int m = 0, n = 0;
	for (int i = 0; i < 12; i++) {
		int b = m + 300 - a[i];
		if (b < 0) {
			printf("-%d", i + 1);
			return 0;
		}
		m = b % 100;
		n += b - m;
	}
	printf("%.0lf", n * 1.2 + m);

	return 0;
}