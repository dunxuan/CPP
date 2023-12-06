#include <cstdio>
#include <iostream>
#include <string>
int main()
{
	long long n;
	std::string s;
	std::cin >> n >> s;
	long long c[26][2]{};
	for (long long i = 0; i < n; i++) {
		c[s[i] - 97][0]++;
	}
	for (auto &i : c) {
		i[1] = (i[0] * (i[0] - 1)) / 2;
	}
	long long ans = 0;
	for (int i = 0; i < 26; i++) {
		if (!c[i][0]) {
			continue;
		}
		for (int j = 0; j < 26; j++) {
			if (i == j || !c[j][0]) {
				continue;
			}
			ans += c[j][1];
		}
	}
	printf("%lld", ans);
}