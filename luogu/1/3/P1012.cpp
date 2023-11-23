#include <algorithm>
#include <iostream>
#include <string>
bool cmp(std::string a, std::string b)
{
	return a + b > b + a;
}
int main()
{
	int n;
	std::cin >> n;
	std::string s, ss[20];
	for (int i = 0; i < n; i++) {
		std::cin >> ss[i];
	}
	std::sort(ss, ss + n, cmp);
	for (int i = 0; i < n; i++) {
		s += ss[i];
	}
	std::cout << s;
}