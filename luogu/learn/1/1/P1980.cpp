#include <algorithm>
#include <iostream>
#include <string>
int main()
{
	int n, x;
	std::cin >> n >> x;
	int c=0;
	for (int i = 1; i <= n; i++) {
		std::string s = std::to_string(i);
		c += std::count(s.begin(), s.end(), x + '0');
	}
	std::cout << c;
}