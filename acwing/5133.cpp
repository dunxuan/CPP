#include <cstdio>
#include <list>
#include <map>
int main()
{
	int n;
	scanf("%d", &n);
	std::map<int, int> m;
	std::map<int, int> mm;
	std::map<int, bool> used;
	std::list<int> x, y;

	for (int i = 0; i < n; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		m.emplace(a, b);
		mm.emplace(b, a);
		used.emplace(a, false);
	}

	if (n % 2) {
		int a = 0;
		while (m[a]) {
			x.push_back(m[a]);
			used[a] = true;
			a = m[a];
		}

		int b;
		for (auto it = m.begin(); it != m.end(); it++) {
			if (!used[it->first]) {
				b = it->first;
				break;
			}
		}
		int c = b;
		while (m[b]) {
			
		}
	}
}