#include <cstdio>
int main()
{
	int i, a[100]{};
	for (i = 0;; i++) {
		scanf("%d", &a[i]);
		if (!a[i]) {
			break;
		}
	}
	for (i--; i >= 0; i--) {
		printf("%d ", a[i]);
	}
}