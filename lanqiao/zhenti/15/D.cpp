#include <cmath>
#include <iostream>
#include <string>
int main()
{
	// int n;
	// std::string d;
	// std::cin >> n >> d;
	// std::string n2 = std::to_string(std::pow(2, n));
	// for (int i = 0; i < 7; i++) {
	// 	n2.pop_back();
	// }
	// std::string ans = "0";
	// for (int i = 0;; i++) {
	// 	long long c = 0, e = 0;
	// 	for (int j = i; j >= 0; j--) {
	// 		for (int k = 0; k <= i; k++) {
	// 			int a = n2[j] - '0', b = d[k] - '0';
	// 			c += a * b % 10, e += a * b / 10;
	// 		}
	// 	}
	// 	c = (ans[i] + c) % 10;
	// 	ans.push_back(c + '0');
	// 	e += (ans[i] + c) / 10;
	// 	long long f = 0;
	// 	for (int j = i + 1; j < ans.size(); j++) {
	// 		int ch = (ans[j] - '0' + e) % 10;
	// 		e /= 10;
	// 		e += (ans[j] - '0' + e) / 10;
	// 		ans[j] = ch;
	// 	}
	// }
	int n;
	double d;
	std::cin >> n >> d;
	double ans = d * pow(2, n);
	std::cout << std::round(ans);
}