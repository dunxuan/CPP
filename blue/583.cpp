#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n = 0;
	for (int i = 1; i <= 2020; i++) {
		if (!(i % 12)) {
			n++;
		}
	}
	cout << n;
	return 0;
}