#include <iostream>
#include <unordered_map>
long long m;
std::unordered_map<long long, long long> dp;
long long fib(long long n)
{
	if (dp[n]) {
		return dp[n];
	}
	if (n == 1 || n == 2) {
		return 1;
	} else {
		return dp[n] = (fib(n - 1) + fib(n - 2)) % m;
	}
}
int main()
{
	std::cin >> m;
	long long i = 2;
	while (fib(i) != 0 || fib(i + 1) != 1) {
		i++;
	}
	std::cout << i;
}