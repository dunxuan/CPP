#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, a;
	string A[10001]{};
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		A[i] = to_string(a);
	}
	int m = 0;
	string last = A[0];
	for (int i = 1; i < n; i++) {
		if (A[i].front() != last.back()) {
			m++;
		}
		else {
			last = A[i];
		}
	}
	cout << m;
	return 0;
}