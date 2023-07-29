#include <bits/stdc++.h>
using namespace std;

int t, m[10]{}, n[10]{};
int mn[52][52]{};
int ld[10]{2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
int h[2500]{}, hh = 0;

bool find_mn(int num)
{
	for (int i = 0; i < hh; i++) {
		if (num == h[i]) {
			return true;
		}
	}
	return false;
}

int main()
{
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> m[i] >> n[i];
		for (int j = 1; j <= m[i]; j++) {
			for (int k = 1; k <= n[i]; k++) {
				scanf("%1d", &mn[j][k]);
			}
			getchar();
		}
		for (int j = 1; j <= m[i]; j++) {
			for (int k = 1; k <= n[i]; k++) {
				if (mn[j][k] != 1) {
					continue;
				}
				else if (mn[j][k] == 1) {
					int ff = 0;
					for (int aa = j, bb = k, cc = j, dd = k;;) {
						if (aa > 0 && find_mn(mn[aa][k])) {
							ff++;
						}
						else if (aa > 0) {
							aa--;
						}
						else {
							break;
						}
						if (bb > 0 && find_mn(mn[j][bb])) {
							ff++;
						}
						else if (bb > 0) {
							bb--;
						}
						else {
							break;
						}
						if (cc < j && find_mn(mn[cc][k])) {
							ff++;
						}
						else if (cc < j) {
							cc++;
						}
						else {
							break;
						}
						if (dd < k && find_mn(mn[j][dd])) {
							ff++;
						}
						else if (dd < k) {
							dd++;
						}
						else {
							break;
						}
						if (ff == 4) {
							break;
						}
					}
					if (ff != 4) {
						int a = j, b = k;
						int f = 0;
						int c, d, e;
						for (;;) {
							mn[a][b] = ld[i];
							if (mn[a - 1][b] == 1) {
								if (f != 1) {
									f = 1;
									c = a, d = b, e = f;
								}
								a = a - 1;
							}
							else if (mn[a + 1][b] == 1) {
								if (f != 2) {
									f = 2;
									c = a, d = b, e = f;
								}
								a = a + 1;
							}
							else if (mn[a][b - 1] == 1) {

								if (f != 3) {
									f = 3;
									c = a, d = b, e = f;
								}
								b = b - 1;
							}
							else if (mn[a][b + 1] == 1) {
								if (f != 4) {
									f = 4;
									c = a, d = b, e = f;
								}
								b = b + 1;
							}
							else {
								if (mn[c - 1][d] == 1 || mn[c + 1][d] == 1 || mn[c][d - 1] == 1 || mn[c][d + 1] == 1) {
									a = c, b = d, f = e;
								}
								else {
									h[hh] = ld[i];
									hh++;
									ld[i]++;
									break;
								}
							}
						}
					}
				}
			}
		}
	}

	for (int i = 0; i < t; i++) {
		cout << ld[i] - 2
		     << '\n';
	}
}