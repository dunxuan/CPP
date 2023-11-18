#include <cstdio>
#include <iostream>
int main()
{
	int n = 0;
	for (char ch; (ch = getchar()) != '\n';) {
		if (ch != ' ') {
			n++;
		}
	}
	std::cout << n;
}