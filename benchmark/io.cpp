#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <ostream>
#include <vector>

const long long MAXN = 1e7;
long long numbers[MAXN];
std::vector<long long> numbersVector;

void scanf_read()
{
	freopen("data.txt", "r", stdin);
	for (long long i = 0; i < MAXN; i++) {
		scanf("%d", &numbers[i]);
	}
}
void cin_read()
{
	freopen("data.txt", "r", stdin);
	for (long long i = 0; i < MAXN; i++) {
		std::cin >> numbers[i];
	}
}
void cin_read_nosync()
{
	freopen("data.txt", "r", stdin);
	std::ios::sync_with_stdio(false);
	for (long long i = 0; i < MAXN; i++) {
		std::cin >> numbers[i];
	}
}
void scanf_read_vector_push()
{
	freopen("data.txt", "r", stdin);
	for (long long i = 0; i < MAXN; i++) {
		long long n;
		scanf("%d", &n);
		numbersVector.push_back(n);
	}
}
void cin_read_vector_push()
{
	freopen("data.txt", "r", stdin);
	for (long long i = 0; i < MAXN; i++) {
		long long n;
		std::cin >> n;
		numbersVector.push_back(n);
	}
}
void cin_read_nosync_vector_push()
{
	freopen("data.txt", "r", stdin);
	std::ios::sync_with_stdio(false);
	for (long long i = 0; i < MAXN; i++) {
		long long n;
		std::cin >> n;
		numbersVector.push_back(n);
	}
}
void scanf_read_vector_emplace()
{
	freopen("data.txt", "r", stdin);
	for (long long i = 0; i < MAXN; i++) {
		long long n;
		scanf("%d", &n);
		numbersVector.emplace_back(n);
	}
}
void cin_read_vector_emplace()
{
	freopen("data.txt", "r", stdin);
	for (long long i = 0; i < MAXN; i++) {
		long long n;
		std::cin >> n;
		numbersVector.emplace_back(n);
	}
}
void cin_read_nosync_vector_emplace()
{
	freopen("data.txt", "r", stdin);
	std::ios::sync_with_stdio(false);
	for (long long i = 0; i < MAXN; i++) {
		long long n;
		std::cin >> n;
		numbersVector.emplace_back(n);
	}
}
void scanf_read_vector()
{
	std::vector<long long> numbersVector(MAXN);
	freopen("data.txt", "r", stdin);
	for (long long i = 0; i < MAXN; i++) {
		long long n;
		scanf("%d", &n);
		numbersVector[i] = n;
	}
}
void cin_read_vector()
{
	std::vector<long long> numbersVector(MAXN);
	freopen("data.txt", "r", stdin);
	for (long long i = 0; i < MAXN; i++) {
		long long n;
		std::cin >> n;
		numbersVector[i] = n;
	}
}
void cin_read_nosync_vector()
{
	std::vector<long long> numbersVector(MAXN);
	freopen("data.txt", "r", stdin);
	std::ios::sync_with_stdio(false);
	for (long long i = 0; i < MAXN; i++) {
		long long n;
		std::cin >> n;
		numbersVector[i] = n;
	}
}
void cout_write()
{
	freopen("data.txt", "w", stdout);
	for (long long i = 0; i < MAXN; i++) {
		std::cout << i << '\n';
	}
	exit(0);
}

template <typename Func> void measure_execution_time(Func function)
{
	int start = clock();
	function(); // 运行传入的函数
	int end = clock();
	double time_taken = static_cast<double>(end - start) / CLOCKS_PER_SEC;
	std::cout << time_taken << std::endl;
}
int main()
{
	// 单独调用和测量每个函数的时间
	measure_execution_time(scanf_read); 				//6.782
	measure_execution_time(cin_read); 				//11.701
	measure_execution_time(cin_read_nosync); 			//4.223
	std::cout<<std::endl;
	measure_execution_time(scanf_read_vector_push); 		//6.836
	measure_execution_time(cin_read_vector_push); 		//4.328
	measure_execution_time(cin_read_nosync_vector_push); 		//4.336
	std::cout<<std::endl;
	measure_execution_time(scanf_read_vector_emplace); 		//6.846
	measure_execution_time(cin_read_vector_emplace); 		//4.319
	measure_execution_time(cin_read_nosync_vector_emplace); 	//4.29
	std::cout<<std::endl;
	measure_execution_time(scanf_read_vector); 			//6.844
	measure_execution_time(cin_read_vector); 			//4.309
	measure_execution_time(cin_read_nosync_vector); 		//4.303

	// cout_write 不应该在这里调用和测量，因为它会退出程序
	// measure_execution_time(cout_write);
}