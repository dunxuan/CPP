#include <bits/stdc++.h>
using namespace std;

int main()
{
	int k;
	string s;
	char c1, c2;
	cin >> k >> s >> c1 >> c2;
	int num = 0;

	for (int i = 0; i < s.size() - k + 1; i++) {
		for (int j = i + k - 1; j < s.size(); j++) {
			if (s[i] == c1 && s[j] == c2) {
				num++;
			}
		}
	}
	cout << num;
	return 0;
}