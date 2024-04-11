#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
const int MAXN = 10000000;

int numbers[MAXN];
std::vector<int> numbersVector;

void scanf_read()
{
	freopen("data.txt", "r", stdin);
	for (int i = 0; i < MAXN; i++) {
		scanf("%d", &numbers[i]);
	}
}
void cin_read()
{
	freopen("data.txt", "r", stdin);
	for (int i = 0; i < MAXN; i++) {
		std::cin >> numbers[i];
	}
}
void cin_read_nosync()
{
	freopen("data.txt", "r", stdin);
	std::ios::sync_with_stdio(false);
	for (int i = 0; i < MAXN; i++) {
		std::cin >> numbers[i];
	}
}
void scanf_read_vector_push()
{
	freopen("data.txt", "r", stdin);
	for (int i = 0; i < MAXN; i++) {
		int n;
		scanf("%d", &n);
		numbersVector.push_back(n);
	}
}
void cin_read_vector_push()
{
	freopen("data.txt", "r", stdin);
	for (int i = 0; i < MAXN; i++) {
		int n;
		std::cin >> n;
		numbersVector.push_back(n);
	}
}
void cin_read_nosync_vector_push()
{
	freopen("data.txt", "r", stdin);
	std::ios::sync_with_stdio(false);
	for (int i = 0; i < MAXN; i++) {
		int n;
		std::cin >> n;
		numbersVector.push_back(n);
	}
}
void scanf_read_vector_emplace()
{
	freopen("data.txt", "r", stdin);
	for (int i = 0; i < MAXN; i++) {
		int n;
		scanf("%d", &n);
		numbersVector.emplace_back(n);
	}
}
void cin_read_vector_emplace()
{
	freopen("data.txt", "r", stdin);
	for (int i = 0; i < MAXN; i++) {
		int n;
		std::cin >> n;
		numbersVector.emplace_back(n);
	}
}
void cin_read_nosync_vector_emplace()
{
	freopen("data.txt", "r", stdin);
	std::ios::sync_with_stdio(false);
	for (int i = 0; i < MAXN; i++) {
		int n;
		std::cin >> n;
		numbersVector.emplace_back(n);
	}
}
void cout_write()
{
	freopen("data.txt", "w", stdout);
	for (int i = 0; i < MAXN; i++) {
		std::cout << i << '\n';
	}
	exit(0);
}
int main()
{
	int start = clock();

	// cout_write();
	// scanf_read();			//6.959
	// cin_read();				//11.907
	// cin_read_nosync(); 			//4.331
	// scanf_read_vector_push();		//6.997
	// cin_read_vector_push();		//11.784
	// cin_read_nosync_vector_push(); 	//4.383
	// scanf_read_vector_emplace();		//7.090
	// cin_read_vector_emplace();		//11.855
	// cin_read_nosync_vector_emplace(); 	//4.387

	printf("%.3lf\n", double(clock() - start) / CLOCKS_PER_SEC);
}