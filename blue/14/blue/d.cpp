#include <bits/stdc++.h>
using namespace std;

struct tdl {
	int T, D, L;
	int TD;
	int start{}, end{};
	bool safe = false;
};

bool cmp(struct tdl a, struct tdl b)
{
	return a.TD < b.TD ? true : false;
}

int main()
{
	int t, n;
	struct tdl TDL[10][10001]{};
	bool T[10]{};
	cin >> t >> n;
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < n; j++) {
			cin >> TDL[i][j].T >> TDL[i][j].D >> TDL[i][j].L;
			TDL[i][j].TD = TDL[i][j].T + TDL[i][j].D;
		}
		sort(&TDL[i][0], &TDL[i][n], cmp);
		TDL[i][0].start = TDL[i][0].T;
		TDL[i][0].end = TDL[i][0].T + TDL[i][0].L;
		TDL[i][0].safe = true;
		struct tdl bk = TDL[i][0];
		for (int j = 1; j < n; j++) {
			if (TDL[i][j].TD >= bk.end) {
				TDL[i][j].start = bk.end < TDL[i][j].T ? TDL[i][j].T : bk.end;
				TDL[i][j].end = TDL[i][j].start + TDL[i][j].L;
				TDL[i][j].safe = true;
				bk = TDL[i][j];
			}
			else {
				TDL[i][0].safe = false;
				break;
			}
		}
	}
	for (int i = 0; i < t; i++) {
		if (TDL[i][0].safe) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	return 0;
}