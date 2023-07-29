#include <bits/stdc++.h>

int main()
{
	char a[1001]{};
	int hash[26]{};
	scanf("%s", a);
	for (int i = 0; a[i] != '\0'; i++) {
		hash[a[i] - 'a']++;
	}
	int max = 0;
	for (int i = 1; i < 26; i++) {
		if (hash[i] > hash[max]) {
			max = i;
		}
	}
	printf("%c\n%d", max + 'a', hash[max]);
	return 0;
}
