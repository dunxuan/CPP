#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	vector<string> s;
	int n;
	unordered_map<string, int> h;

	scanf("%d", &n);

	while (n--) {
		string ss;
		cin >> ss;
		h[ss]++;
		if (h[ss] == 1)
			s.push_back(ss);
	}

	for (auto i : s) {
		cout << i << '\n';
	}

	return 0;
}