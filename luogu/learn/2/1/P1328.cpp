#include <iostream>
#include <vector>
int main()
{
	int n, na, nb;
	std::cin >> n >> na >> nb;
	std::vector<int> a, b;
	for (int i = 0; i < na; i++) {
		int j;
		std::cin >> j;
		a.push_back(j);
	}
	for (int i = 0; i < nb; i++) {
		int j;
		std::cin >> j;
		b.push_back(j);
	}
	int ca = 0, cb = 0;
	int rule[5][5]{ { 0, 0, 1, 1, 0 },
			{ 1, 0, 0, 1, 0 },
			{ 0, 1, 0, 0, 1 },
			{ 0, 0, 1, 0, 1 },
			{ 1, 1, 0, 0, 0 } };
	for (int i = 0; i < n; i++) {
		ca += rule[a[i % na]][b[i % nb]];
		cb += rule[b[i % nb]][a[i % na]];
	}
	std::cout << ca << ' ' << cb;
}