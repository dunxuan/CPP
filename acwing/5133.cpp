#include <cstdio>
int main()
{
	int n;
	scanf("%d", &n);
	int m[200000]{};
	int next[1000000]{}, forward[1000000]{};
	int x[200000], y[200000];

	for (int i = 0; i < n; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		m[i] = a;
		next[a] = b;
		forward[b] = a;
	}

	int a = 0;
	for (int i = 0; next[a]; i++) {
		x[i] = next[a];
		a = next[a];
	}

	int b;
	for (int i = 0; i < n; i++) {
		if (!forward[m[i]] && m[i] != next[0]) {
			b = m[i];
			break;
		}
	}
	y[0] = b;
	for (int i = 1; next[b]; i++) {
		y[i] = next[b];
		b = next[b];
	}

	for (int i = 0; i < n / 2; i++) {
		printf("%d %d ", y[i], x[i]);
	}
}