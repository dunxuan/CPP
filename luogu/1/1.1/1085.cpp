#include <cstdio>
int main()
{
	int max = 0, day = 0;
	for (int i = 0; i < 7; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		if (a + b > 8 && a + b > max) {
			max = a + b;
			day = i + 1;
		}
	}
	printf("%d", day);
}