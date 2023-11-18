#include <iostream>
int main()
{
	int a[100];
	int i;
	for (i = 0;; i++) {
		std::cin >> a[i];
		if (!a[i]) {
			break;
		}
	}
	i--;
	for (int j = i; j >= 0; j--) {
		std::cout << a[j] << ' ';
	}
}