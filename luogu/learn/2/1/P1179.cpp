#include <iostream>
int main()
{
	int L, R;
	std::cin >> L >> R;
	int c = 0;
	for (int i = L; i <= R; i++) {
		int j = i;
		do {
			if (j % 10 == 2) {
				c++;
			}
		} while (j /= 10);
	}
	std::cout << c;
}