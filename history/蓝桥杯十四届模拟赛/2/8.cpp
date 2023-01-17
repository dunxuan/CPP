#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	string s;

	cin >> s;

	for (int k = 0; k < s.size(); k++) {
		string ss = s.substr(k);
		int i, j;
		for (i = 0, j = ss.size() - 1; i < j; i++, j--) {
			if (ss[i] != ss[j]) {
				break;
			}
		}
		if (i >= j) {
			string rs = s.substr(0, k);
			reverse(rs.begin(), rs.end());
			cout << s + rs;
			return 0;
		}
	}

	return 0;
}