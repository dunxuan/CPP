#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n = 0;
	scanf("%d", &n);
	// int hh[n], mm[n], ss[n];
	// int U[n], I[n];
	vector<int> h, m, s, U, I;
	int hh, mm, ss, uu, ii;

	for (int i = 0; i < n; i++) {
		scanf("%d:%d:%d", &hh, &mm, &ss);
		scanf("%d %d", &uu, &ii);
		h.push_back(hh);
		m.push_back(mm);
		s.push_back(ss);
		U.push_back(uu);
		I.push_back(ii);
	}

	int second;
	int J = 0;
	for (int i = 1; i < n; i++) {
		second = 0;
		second += (h[i] - h[i - 1]) * 3600 + (m[i] - m[i - 1]) * 60 +
			  (s[i] - s[i - 1]);
		J += U[i - 1] * I[i - 1] * second;
	}
	printf("%d", J);
}