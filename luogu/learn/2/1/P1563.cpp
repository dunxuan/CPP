#include <iostream>
#include <string>
#include <vector>
int main()
{
	int n, m;
	std::cin >> n >> m;
	std::vector<int> orinet;
	std::vector<std::string> name;
	for (int i = 0; i < n; i++) {
		int o;
		std::string n;
		std::cin >> o >> n;
		orinet.push_back(o);
		name.push_back(n);
	}
	int j = 0;
	for (int i = 0; i < m; i++) {
		int a, s;
		std::cin >> a >> s;
		if (orinet[j]) {
			s *= -1;
		}
		if (a) {
			j = (j + s) % n;
		} else {
			j = (j - s) % n;
		}
		if (j < 0) {
			j += n;
		}
	}
	if (j >= 0) {
		std::cout << name[j];
	} else {
		std::cout << name[j];
	}
}