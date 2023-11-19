#include <iostream>
#include <string>
int main()
{
	std::string a, b;
	std::cin >> a >> b;
	int y = 0;
	for (int i = 0; i < 4; i++) {
		y *= 10;
		y += a[i] - 48;
	}
	std::string yy = std::to_string(y),
		    bb = std::string(b.begin(), b.begin() + 4);
	if (yy + std::string(yy.rbegin(), yy.rend()) < a) {
		y += 1;
		yy = std::to_string(y);
	}
	int n = 0, m[12]{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	for (std::string s = yy + std::string(yy.rbegin(), yy.rend()); s <= b;
	     y++, yy = std::to_string(y),
			 s = yy + std::string(yy.rbegin(), yy.rend())) {
		if (!(y % 4) && y % 100 || !(y % 400)) {
			m[1] = 29;
		} else {
			m[1] = 28;
		}
		int mm = y % 10 * 10 + y / 10 % 10,
		    dd = y / 100 % 10 * 10 + y / 1000;
		if (mm > 12 || mm <= 0 || dd > m[mm - 1] || dd <= 0) {
			continue;
		} else {
			// std::cout << s << '\n';
			n++;
		}
	}
	std::cout << n;
}