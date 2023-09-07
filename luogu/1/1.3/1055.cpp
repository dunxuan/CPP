#include <cstdio>
char s[13];
int x, y;
int i = 0, j = 1;
int main()
{
	scanf("%s", s);
	switch (s[12]) {
	case 'X':
		x = 10;
		break;
	default:
		x = s[12] - '0';
		break;
	}
	for (; i < 12; i++) {
		if (s[i] == '-') {
			continue;
		}
		y += (s[i] - '0') * j++;
	}
	y %= 11;
	if (x == y) {
		printf("Right");
	} else {
		if (y < 10) {
			s[12] = y + '0';
		} else {
			s[12] = 'X';
		}
		printf("%s", s);
	}
}