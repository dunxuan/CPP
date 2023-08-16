#include <algorithm>
#include <cstdio>
int a[100];
bool b[10000];
int n;
int m;
int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		b[a[i]] = true;
	}

	std::sort(a, &a[n - 1]);
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			int c = a[i] + a[j];
			if (c <= 10000 && b[c]) {
				b[c] = false;
				m++;
			}
		}
	}

	printf("%d", m);
}