#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int x;
unordered_map<int, int> m;

int main()
{
	scanf("%d", &x);
	for (int i = 2; i <= x; i++) {
		m[i] = x - i + 1;
	}

	for (auto i : m) {
		for (int j = 2; j * j <= i.first; j++) {
			if (!(i.first % j)) {
				m[j] += i.second;
				m[i.first / j] += i.second;
				m[i.first] = 0;
				break;
			}
		}
	}
	printf("f(%d)=", x);
	for (int i = 2; i <= x; i++) {
		auto it = m.find(i);
		if (it->second) {
			if (i != 2) {
				printf("*");
			}
			printf("%d", it->first);
			if (it->second > 1) {
				printf("^%d", it->second);
			}
		}
	}

	return 0;
}