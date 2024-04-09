#include <iostream>
#include <string>
int main()
{
	int n;
	std::cin >> n;
	std::string name;
	int c = 0, d = 0;
	for (int i = 0; i < n; i++) {
		std::string s1, s2, s3;
		int i1, i2, i3, e = 0;
		std::cin >> s1 >> i1 >> i2 >> s2 >> s3 >> i3;
		if (i1 > 80 && i3 > 0) {
			e += 8000;
		}
		if (i1 > 85 && i2 > 80) {
			e += 4000;
		}
		if (i1 > 90) {
			e += 2000;
		}
		if (i1 > 85 && s3[0] == 'Y') {
			e += 1000;
		}
		if (i1 > 80 && s2[0] == 'Y') {
			e += 850;
		}
		c += e;
		if (e > d) {
			name = s1;
			d = e;
		}
	}
	std::cout << name << '\n' << d << '\n' << c;
}