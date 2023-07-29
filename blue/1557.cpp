#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, a[1000]{};
	cin >> n;
	int k = 0;
	for (int i = 2; i < n; i++) {
		bool f = false;
		for (int j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				f = true;
			}
		}
		if (!f) {
			a[k] = i;
			k++;
		}
	}

	for (int i = 0; a[i] != 0; i++) {
		cout << a[i]
		     << ' ';
	}
	cout << endl
	     << k;

	return 0;
}