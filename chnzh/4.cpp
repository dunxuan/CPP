#include <iostream>
#include <string>
int main()
{
	int n;
	std::string s;
	std::cin >> n >> s;
	// std::unordered_map<char, bool> used;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int cnt[26]{};
		for (int j = i; j < n; j++) {
			cnt[s[j] - 97]++;
		}
		for (int j = 0; j < 26; j++) {
			if (s[i] - 97 != j) {
				ans += (cnt[j] * (cnt[j] - 1)) / 2;
			}
		}
	}
	std::cout << ans;
}