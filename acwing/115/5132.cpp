#include <algorithm>
#include <cstdio>
int main()
{
	int n;
	scanf("%d", &n);

	int w[n], h[n];
	int ww, hh = 0, hh2 = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &w[i], &h[i]);
		ww += w[i];
		if (hh < h[i]) {
			hh2 = hh;
			hh = h[i];
		} else if (hh2 < h[i]) {
			hh2 = h[i];
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", ((ww - w[i]) * (hh == h[i] ? hh2 : hh)));
	}

	return 0;
}