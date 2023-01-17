#include <iostream>

int main(void)
{
	double t, c, s;
	scanf("%lf %lf %lf", &t, &c, &s);

	double avg = c / t;
	double time = (s / avg) - t;

	printf("%0.lf", time);

	return 0;
}