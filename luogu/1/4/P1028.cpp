#include <iostream>
int a[1000];
int f(int n)
{
	int result = 0;
	for (int i = n / 2; i > 0; i--) {
		if (a[i]) {
			result += a[i];
		} else {
			result += f(i);
		}
	}
	a[n] = result + 1;
	return result + 1;
}
int main()
{
	int n;
	std::cin >> n;
	int result = f(n);
	std::cout << result;
}