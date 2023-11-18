#include <cstdio>
#include <ctime>
#include <iostream>
const int MAXN = 10000000;

int numbers[MAXN];

void scanf_read()
{
	freopen("data.txt", "r", stdin);
	for (int i = 0; i < MAXN; i++)
		scanf("%d", &numbers[i]);
}
void cin_read()
{
	freopen("data.txt", "r", stdin);
	for (int i = 0; i < MAXN; i++)
		std::cin >> numbers[i];
}
void cin_read_nosync()
{
	freopen("data.txt", "r", stdin);
	std::ios::sync_with_stdio(false);
	for (int i = 0; i < MAXN; i++)
		std::cin >> numbers[i];
}
void cout_write()
{
	freopen("data.txt", "w", stdout);
	for (int i = 0; i < MAXN; i++)
		std::cout << i << '\n';
}
int main()
{
	int start = clock();

	// cout_write();
	// scanf_read();	//24.191
	// cin_read();		//10.808
	// cin_read_nosync(); 	//3.790

	printf("%.3lf\n", double(clock() - start) / CLOCKS_PER_SEC);
}