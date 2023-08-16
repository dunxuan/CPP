#include <cstdio>
int main()
{
	int a[10], b;
	for (int i = 0; i < 10; i++) {
		scanf(" %3d", &a[i]);
	}
	scanf("%d", &b);
	b += 30;

	int m = 0;
	for (int i = 0; i < 10; i++) {
		if (a[i] <= b) {
			m++;
		}
	}

	printf("%d", m);
}