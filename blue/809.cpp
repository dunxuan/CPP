#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n = 0;
	for (int i = 2; i < 1010; i++) {
		int j, k;
		for (j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				j = 0;
				break;
			}
		}
		if (!j) {
			continue;
		}
		for (j = 2; j * j <= 2019 - i; j++) {
			if (i % j == 0) {
				j = 0;
				break;
			}
		}
		if (j) {
			n++;
		}
	}
	cout << n;
}