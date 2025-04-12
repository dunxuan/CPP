#include <iostream>
#include <vector>
int main()
{
	std::vector<int> a(12);
	for (int i = 0; i < 12; i++) {
		std::cin >> a[i];
	}
	int total = 0;
	int mm = 0;
	for (int i = 0; i < 12; i++) {
		total += 300;
		total -= a[i];
		if (total < 0) {
			std::cout << -(i + 1);
			return 0;
		}
		if (total >= 100) {
			mm += total / 100 * 100;
			total -= total / 100 * 100;
		}
	}
	std::cout << total + mm * 1.2;
}