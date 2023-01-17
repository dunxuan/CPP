#include <iostream>

using namespace std;

int main(void)
{
	double sn = 0;
	double i = 1;
	for (i = 1; sn <= 12; i += 1) {
		sn += 1.0 / i;
	}
	printf("%lf\n", i - 1);
}
