#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int input[30][60]{};

	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 60; j++) {
			scanf("%1d", &input[i][j]);
		}
	}

	

	return 0;
}