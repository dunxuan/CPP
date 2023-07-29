#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, a[100][100]{}, b[100]{};
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int ii, jj;
		cin >> ii >> jj;
		a[ii][jj] = 1;
		a[jj][ii] = 1;
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i][j]) {
				if (b[j] == b[i]) {
					b[j]++;
				}
			}
			else {
				if (!b[j]) {
					b[j] = b[i];
				}
			}
		}
	}
	sort(&b[0], &b[n - 1]);
	cout << b[n - 1] + 1;
}