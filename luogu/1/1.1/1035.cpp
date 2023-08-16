#include <cstdio>
int main()
{
	int k;
	scanf("%d", &k);

	double sn = 0, n;
	for (n = 1; sn <= k; n++) {
		sn += 1 / n;
	}

	printf("%.0lf", n - 1);
}