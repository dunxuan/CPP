#include <cstdio>
int n;
char ch;
int main()
{
	for (; (ch = getchar()) != '\n';) {
		if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' ||
		    ch >= '0' && ch <= '9') {
			n++;
		}
	}
	printf("%d", n);
}