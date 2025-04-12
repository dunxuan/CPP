#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <ostream>
#include <vector>

const long long MAXN = 1e7;
long long numbers[MAXN];
std::vector<long long> numbersVector;

void scanf_read();
void cin_read();
void cin_read_nosync();
void scanf_read_vector_push();
void cin_read_vector_push();
void cin_read_nosync_vector_push();
void scanf_read_vector_emplace();
void cin_read_vector_emplace();
void cin_read_nosync_vector_emplace();
void scanf_read_vector();
void cin_read_vector();
void cin_read_nosync_vector();
void cout_write();
template <typename Func> void measure_execution_time(Func function);

int main()
{
	// 单独调用和测量每个函数的时间
	measure_execution_time(scanf_read); 				//7.036
	measure_execution_time(cin_read); 				//10.958
	measure_execution_time(cin_read_nosync); 			//3.674
	std::cout << std::endl; 						//
	measure_execution_time(scanf_read_vector_push); 		//7.004
	measure_execution_time(cin_read_vector_push); 		//3.773
	measure_execution_time(cin_read_nosync_vector_push); 		//3.268
	std::cout << std::endl; 						//
	measure_execution_time(scanf_read_vector_emplace); 		//7.118
	measure_execution_time(cin_read_vector_emplace); 		//3.19
	measure_execution_time(cin_read_nosync_vector_emplace); 	//3.756
	std::cout << std::endl; 						//
	measure_execution_time(scanf_read_vector); 			//7.074
	measure_execution_time(cin_read_vector); 			//3.789
	measure_execution_time(cin_read_nosync_vector); 		//3.198

	// cout_write 不应该在这里调用和测量，因为它会退出程序
	// cout_write();
}

void scanf_read()
{
	freopen("data.txt", "r", stdin);
	for (long long i = 0; i < MAXN; i++) {
		scanf("%lld", &numbers[i]);
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
		scanf("%lld", &n);
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
		scanf("%lld", &n);
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
		scanf("%lld", &numbersVector[i]);
	}
}
void cin_read_vector()
{
	std::vector<long long> numbersVector(MAXN);
	freopen("data.txt", "r", stdin);
	for (long long i = 0; i < MAXN; i++) {
		std::cin >> numbersVector[i];
	}
}
void cin_read_nosync_vector()
{
	std::vector<long long> numbersVector(MAXN);
	freopen("data.txt", "r", stdin);
	std::ios::sync_with_stdio(false);
	for (long long i = 0; i < MAXN; i++) {
		std::cin >> numbersVector[i];
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
