#include <iostream>
#include <stack>
int main()
{
	std::stack<int> s;
	int a;
	while (std::cin >> a) {
		s.push(a);
	}

	s.pop();
	while (!s.empty()) {
		std::cout << s.top()<<' ';
		s.pop();
	}
}