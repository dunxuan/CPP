#include <iostream>
int main()
{
	int a[10], b;
	for (int i = 0; i < 10; i++) {
		std::cin >> a[i];
	}
	std::cin >> b;
	b += 30;
	int c = 0;
	for (int i = 0; i < 10; i++) {
		if (a[i] <= b) {
			c++;
		}
	}
	std::cout << c;
}