#include <cstdio>
int main()
{
	int n;
	scanf("%d", &n);

	int i;
	for (i = 1; n - i > 0; i++) {
		n -= i;
	}
	int a, b;
	if (i % 2) {
		a = i - n + 1;
		b = n;
	} else {
		a = n;
		b = i - n + 1;
	}
	printf("%d/%d", a, b);
}