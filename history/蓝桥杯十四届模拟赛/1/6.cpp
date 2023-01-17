#include <iostream>

int main(void)
{
	int s, t;
	int days = 0;
	scanf("%d %d", &s, &t);
	if (t <= s) {
		days = 7 - s + t;
	} else {
		days = t - s;
	}
	printf("%d", days);
}