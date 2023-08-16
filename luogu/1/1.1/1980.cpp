#include <cstdio>
#include <string>
int main()
{
	int n, x;
	scanf("%d %d", &n, &x);

	int a = 0;
	for (int i = 1; i <= n; i++) {
		int j = i;
		while (j) {
			if (j % 10 == x) {
				a++;
			}
			j /= 10;
		}
	}

	printf("%d", a);
}