#include <iostream>
int main()
{
	int sn = 0;
	for (int i = 49; i >= 21; i--) {
		sn += i;
	}
	std::cout << sn;
}