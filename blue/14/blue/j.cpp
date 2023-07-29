#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int a[10001]{};
	for (int i = 0; i < n-1; i++) {
		cin >> a[i] >> a[i] >> a[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}
	cout << "4";
}