#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n = 0;
	for (int i = 1; i <= 1200000; i++) {
		if (1200000 % i == 0) {
			n++;
		}
	}
	cout << n;
}