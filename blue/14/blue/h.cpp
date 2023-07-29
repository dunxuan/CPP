#include <bits/stdc++.h>
using namespace std;

struct num {
	int n;
	int nn;
};
bool cmp(struct num a, struct num b)
{
	return a.n < b.n ? true : false;
}
int main()
{
	int n, k, a[50001]{};
	struct num A[50001]{};
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		A[i].n = a[i];
		A[i].nn = i;
	}
	if (n == k + 1) {
		int n = 0;
		for (int i = 0; i < n; i++) {
			n += a[i];
		}
		cout << n;
		return 0;
	}
	sort(&A[0], &A[n], cmp);
	for (int i = 0; i < k; i++) {
		int j;
		for (j = 1;;) {
			if (A[i].nn - j == -1) {
				j = -1;
			}
			if (a[A[i].nn - j] != 0) {
				break;
			}
			if (j > 0) {
				j++;
			}
			else {
				j--;
			}
		}
		a[A[i].nn - j] += a[A[i].nn];
		a[A[i].nn] = 0;
	}
	for (int i = 0; i < n; i++) {
		if (a[i] == 0) {
			continue;
		}
		else {
			cout << a[i] << ' ';
		}
	}
	return 0;
}