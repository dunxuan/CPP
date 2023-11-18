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
int main()
{
	int start = clock();

	// scanf_read();	//28.150
	// cin_read();		//10.056
	// cin_read_nosync();	//3.189

	printf("%.3lf\n", double(clock() - start) / CLOCKS_PER_SEC);
}