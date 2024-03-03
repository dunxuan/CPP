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
	std::string s[20];
	for (int i = 0; i < n; i++) {
		std::cin >> s[i];
	}
	std::sort(&s[0], &s[n], cmp);
	for (int i = 0; i < n; i++) {
		std::cout << s[i];
	}
}