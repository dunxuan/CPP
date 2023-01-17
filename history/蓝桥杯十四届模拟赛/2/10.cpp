#include <bits/stdc++.h>

int main(void)
{
	unsigned long long n;

	scanf("%llu ", &n);

	unsigned long long sum = 0;
	unsigned long long a[n];
	for (unsigned long long i = 0; i < n; i++) {
		scanf("%llu", &a[i]);
	}

	for (unsigned long long i = 0; i < n - 1; i++) {
		for (unsigned long long j = 0; j < n - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				sum += a[j];
				unsigned long long tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}

	printf("%llu", sum);
	return 0;
}