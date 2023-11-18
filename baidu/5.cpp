#include <cstdio>
#include <unordered_map>

using namespace std;

int n, k, p[50000];
int result;
unordered_map<int, int> a;
bool f;

int main()
{
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d", &p[i]);
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j <= i + k && j < n; j++) {
			if (p[i] == p[j]) {
				a[p[i]] = p[i];
			}
		}
	}

	for (auto x : a) {
		if (!f) {
			result = x.first;
			f = true;
		} else {
			result ^= x.first;
		}
	}

	printf("%d", result);

	return 0;
}