#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n, a[10001]{}, b[10001]{};
	cin >> n;
	for (long long i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
	}
	long long min = 1000000001, max = 0;
	for (long long i = 0; i < n; i++) {
		if (a[i] / b[i] < min) {
			min = a[i] / b[i];
		}
	}
	max = min;
	for (long long v = min;; v--) {
		bool f = false;
		for (long long i = 0; i < n; i++) {
			if (a[i] / v != b[i]) {
				f = true;
				v++;
				break;
			}
			else {
				if (a[i] / b[i] < min) {
					min = a[i] / b[i];
				}
			}
		}
		if (f) {
			min = v;
			break;
		}
	}
	for (long long v = min;; v++) {
		bool f = false;
		for (long long i = 0; i < n; i++) {
			if (a[i] / v != b[i]) {
				f = true;
				v--;
				break;
			}
		}
		if (f) {
			max = v;
			break;
		}
	}

	cout << min << ' ' << max;
	return 0;
}