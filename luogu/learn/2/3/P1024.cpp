#include <cstdio>
#include <iostream>
double a, b, c, d;
double f(double x)
{
	return ((a * x + b) * x + c) * x + d;
}
int main()
{
	std::cin >> a >> b >> c >> d;
	int j = 0;
	for (double i = -101; i < 100 && j < 3; i++) {
		if (!f(i)) {
			printf("%.2f ", i);
			j++;
			continue;
		}
		if (f(i) * f(i + 1) >= 0) {
			continue;
		}
		double m = i, n = i + 1;
		while (n - m >= 0.001) {
			double mid = (m + n) / 2;
			if (f(m) * f(mid) < 0) {
				n = mid;
			} else {
				m = mid;
			}
		}
		printf("%.2f ", n);
		j++;
	}
}