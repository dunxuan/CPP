#include <iostream>
#include <string>

int main(void)
{
	char s[100] = { 0 };
	scanf("%s", &s);
	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
		    s[i] == 'u') {
			s[i] = s[i] - 'a' + 'A';
		}
	}
	printf("%s", s);
}