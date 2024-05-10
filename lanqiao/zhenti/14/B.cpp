#include <cmath>
#include <iostream>
int main()
{
	for (int i = 1; i <= 23333333 / 2; i++) {
		double h = -i * (i / 23333333.0) * std::log2(i / 23333333.0) -
			   (23333333 - i) * ((23333333 - i) / 23333333.0) *
				   std::log2((23333333 - i) / 23333333.0);
		if (h > 11625907.579 && h < 11625907.580) {
			std::cout << i ;
		}
	}
}