#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
int main()
{
	std::vector<std::string> s1, s2;
	do {
		std::string s;
		char ch;
		for (int i = 0; (ch = getchar()) != '\n';) {
			if (ch == '<') {
				if (!s.empty()) {
					s.pop_back();
					i--;
				}
			} else {
				s.push_back(ch);
				i++;
			}
		}
		s1.push_back(s);
	} while (s1.back() != "EOF");
	do {
		std::string s;
		char ch;
		for (int i = 0; (ch = getchar()) != '\n';) {
			if (ch == '<') {
				if (!s.empty()) {
					s.pop_back();
					i--;
				}
			} else {
				s.push_back(ch);
				i++;
			}
		}
		s2.push_back(s);
	} while (s2.back() != "EOF");
	int a = 0, b;
	std::cin >> b;
	for (int i = 0; i < s1.size() - 1; i++) {
		for (int j = 0; j < s1[i].size() && j < s2[i].size(); j++) {
			if (s1[i][j] == s2[i][j]) {
				a++;
			}
		}
	}
	int result = a * 60 / b;
	std::cout << result;
}