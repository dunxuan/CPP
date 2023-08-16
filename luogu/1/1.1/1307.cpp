#include <algorithm>
#include <cstdio>
#include <string>
int main()
{
	int n;
	scanf("%d", &n);

	if (!n) {
		printf("0");
		return 0;
	}
	if (n < 0) {
		printf("-");
		n *= -1;
	}
	std::string s = std::to_string(n);
	std::reverse(s.begin(), s.end());
	for (auto it = s.begin(); it != s.end() && *it == '0'; ) {
		s.erase(it, it + 1);
	}
	printf("%s", s.c_str());
}