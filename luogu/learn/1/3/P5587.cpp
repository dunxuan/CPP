#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
int main()
{
	std::vector<std::string> s1, s2;
	do {
		std::string s;
		char c;
		while ((c = getchar()) != '\n') {
			if (c == '<') {
				if (!s.empty()) {
					s.pop_back();
				}
			} else {
				s.push_back(c);
			}
		}
		s1.push_back(s);
	} while (s1.back() != "EOF");
	do {
		std::string s;
		char c;
		while ((c = getchar()) != '\n') {
			if (c == '<') {
				if (!s.empty()) {
					s.pop_back();
				}
			} else {
				s.push_back(c);
			}
		}
		s2.push_back(s);
	} while (s2.back() != "EOF");
	int t, kpm = 0;
	std::cin >> t;
	for (unsigned long long i = 0; i < s1.size() - 1; i++) {
		for (unsigned long long j = 0;
		     j < s1[i].size() && j < s2[i].size(); j++) {
			if (s1[i][j] == s2[i][j]) {
				kpm++;
			}
		}
	}
	kpm = kpm * 60 / t;
	std::cout << kpm;
}