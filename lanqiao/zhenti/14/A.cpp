#include <iostream>
#include <string>
#include <vector>
int main()
{
	std::vector<int> a{ 5, 6, 8, 6, 9, 1, 6, 1, 2, 4, 9, 1, 9, 8, 2, 3, 6,
			    4, 7, 7, 5, 9, 5, 0, 3, 8, 7, 5, 8, 1, 5, 8, 6, 1,
			    8, 3, 0, 3, 7, 9, 2, 7, 0, 5, 8, 8, 5, 7, 0, 9, 9,
			    1, 9, 4, 4, 6, 8, 6, 3, 3, 8, 5, 1, 6, 3, 4, 6, 7,
			    0, 7, 8, 2, 7, 6, 8, 9, 5, 6, 5, 6, 1, 4, 0, 1, 0,
			    0, 9, 4, 8, 0, 9, 1, 2, 8, 5, 0, 2, 5, 3, 3 };
	int m[13]{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int c = 0;
	for (int i = 1; i <= 12; i++) {
		std::string ci = i < 10 ? "0" : "";
		for (int j = 1; j <= m[i]; j++) {
			std::string cj = j < 10 ? "0" : "";
			std::string s = "2023" + ci + std::to_string(i) + cj +
					std::to_string(j);
			for (int m = 0, n = 0; m < 100; m++) {
				if (a[m] == s[n] - '0') {
					n++;
				}
				if (n == 8) {
					c++;
					break;
				}
			}
		}
	}
	std::cout << c;
}