#include <algorithm>
#include <cstdio>
int cmp(int a, int b)
{
	return a < b;
}
int main()
{
	int n;
	scanf("%d", &n);
	int a[3], b[3];
	for (int i = 0; i < 3; i++) {
		scanf("%d %d", &a[i], &b[i]);
	}

	int m[3]{};
	for (int i = 0; i < 3; i++) {
		int nn = n;
		while (nn > 0) {
			nn -= a[i];
			m[i] += b[i];
		}
	}
	std::sort(m, m + 3, cmp);
	printf("%d", m[0]);
}