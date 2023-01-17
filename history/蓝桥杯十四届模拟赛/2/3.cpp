#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	for (int i = 10;; i++) {
		string s = to_string(i);
		int j = stoi(s, nullptr, 16);
		if (!(j % i)) {
			printf("%d", i);
			break;
		}
	}

	return 0;
}