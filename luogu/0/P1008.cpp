#include <cstdio>
int main()
{
	for (int i = 100; i < 333; i++) {
		int a = i, b = 2 * i, c = 3 * i;
		int n[10]{};
		for (int i = 0; i < 3; i++) {
			n[a % 10]++;
			a /= 10;
			n[b % 10]++;
			b /= 10;
			n[c % 10]++;
			c /= 10;
		}
		int m;
		for (m = 1; m <= 9; m++) {
			if (n[m] != 1) {
				break;
			}
		}
		if (m == 10) {
			printf("%d %d %d\n", i, 2 * i, 3 * i);
		}
	}
}