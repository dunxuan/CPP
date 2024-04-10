#include <algorithm>
#include <iostream>
#include <vector>
struct p {
	int i, s, w;
};
bool cmp(p a, p b)
{
	if (a.s == b.s) {
		return a.i < b.i;
	}
	return a.s > b.s;
}
int main()
{
	int n, r, q;
	std::cin >> n >> r >> q;
	std::vector<p> a(2 * n);
	for (int i = 0; i < 2 * n; i++) {
		int ss;
		std::cin >> ss;
		a[i].i = i;
		a[i].s = ss;
	}
	for (int i = 0; i < 2 * n; i++) {
		int ww;
		std::cin >> ww;
		a[i].w = ww;
	}
	std::sort(a.begin(), a.end(), cmp);
	for (int i = 0; i < r; i++) {
		for (int i = 0; i < 2 * n; i += 2) {
			if (a[i].w > a[i + 1].w) {
				a[i].s++;
			} else {
				a[i + 1].s++;
			}
		}
		// std::sort(a.begin(), a.end(), cmp);
		std::stable_sort(a.begin(), a.end(), cmp);
	}
	std::cout << a[q - 1].i + 1;
}