#include <cstdio>
int main()
{
	int n;
	scanf("%d", &n);

	int a[n];
	int min;
	scanf("%d", &a[0]);
	min = a[0];
	for (int i = 1; i < n; i++) {
		scanf("%d", &a[i]);
		if (a[i] < min) {
			min = a[i];
		}
	}

	printf("%d", (min ^ a[2]) + 2);

	return 0;
}