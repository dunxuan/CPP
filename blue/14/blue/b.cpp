#include <bits/stdc++.h>
using namespace std;

int main()
{
	double s = 11625907.5798;
	double h = 0;
	// for (int i = 1; i <= 11666666; i++) {
	for (int i = 11666666; i > 0; i--) {
		h = 0;
		for (int j = 0; j <= 23333333; j++) {
			double p = 0;
			if (j <= i) {
				p = (double)i / 23333333;
			}
			else {
				p = (double)(23333333 - i) / 23333333;
			}
			h -= p * log2(p);
			// cout << h << '\n';
		}
		if ((long long)h == (long long)s) {
		cout << i
		     << '\n'
		     << h
		     << '\n';
		}
	}
}