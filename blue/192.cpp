#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n, a[100001], min;
	cin >> n;
	for (long long i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	min = a[1] - a[0];
	for (long long i = 2; i < n; i++) {
		if (a[i] - a[i - 1] < min) {
			min = a[i] - a[i - 1];
		}
	}
	long long b = ((a[n - 1] - a[0]) / min) + 1;
	if (min) {
		cout << b;
	}
	else {
		cout << n;
	}
	return 0;
}