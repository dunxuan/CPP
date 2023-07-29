#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n, i;
	cin >> n;
	long long nn = sqrt(n);
	for (i = 2; i <= nn; i++) {
		if (n % i == 0) {
			cout << n / i;
			break;
		}
	}
	return 0;
}