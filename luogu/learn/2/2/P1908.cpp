#include <iostream>
#include <vector>
int c;
int main()
{
	int n;
	std::cin >> n;
	std::vector<long long> a;
	for (int i = 0; i < n; i++) {
		int j;
		std::cin >> j;
		a.emplace_back(j);
	}
	
	std::cout << c;
}