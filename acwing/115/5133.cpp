#include <cstdio>
#include <unordered_map>
int main()
{
	int n;
	scanf("%d", &n);
	int m[n];
	std::unordered_map<int, int> next, forward;
	int x[n], y[n];

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

	for (int i = 0; i < n; i++) {
		printf("%d ", i % 2 ? x[i / 2] : y[i / 2]);
	}

	return 0;
}