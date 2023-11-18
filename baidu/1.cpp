#include <bits/stdc++.h>

using namespace std;
long long n, result;
int main()
{
	scanf("%lld", &n);
	if (n < 9) {
		result = 0;
	} else if (n == 9) {
		result = 1;
	} else {
		result = 26;
		for (int i = 1; i < n - 9; i++) {
			result *= 26;
			while (result > 10000000000) {
				result -= 10000000000;
			}
		}
		result *= 4;
		result %= 1000000007;
	}

	printf("%lld", result);

	return 0;
}