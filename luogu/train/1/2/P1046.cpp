#include <iostream>
#include <vector>
int main()
{
	std::vector<int> a(10);
	int b;
	for (int i = 0; i < 10; i++) {
		std::cin >> a[i];
	}
	std::cin >> b;
	b += 30;
	int c = 0;
	for (auto i : a) {
		if (i <= b) {
			c++;
		}
	}
	std::cout << c;
}