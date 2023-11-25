#include <iostream>
#include <vector>
int main()
{
	std::vector<int> a{ 20, 30, 40 };
	for (auto it = a.begin(); it != a.end(); it++) {
		std::cout << *it.base() << '\n';
		if (*it.base() > 20) {
			a.erase(it);
		}
	}
	for(auto i: a){
		std::cout<<i<<' ';
	}
}