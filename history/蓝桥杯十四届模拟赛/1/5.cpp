//
#include <iostream>

int main(void)
{
	int mtx[100][100] = { 1 };

	for (int i = 1; i < 100; i++) {
		for (int j = 0; j < 1; j++) {
			mtx[i][j] = mtx[i - 1][j] + 1;
		}
	}
	for (int i = 0; i < 100; i++) {
		for (int j = 1; j < 100; j++) {
			mtx[i][j] = mtx[i][j - 1] + 2;
		}
	}

	int sn = 0;
	int num = 0;
	for (int i = 100; i >= 0; i--) {
		for (int j = 100; j >= 0; j--) {
			sn += mtx[i][j];
			num++;
			if (sn < 2022) {
				printf("sn=%dnum=%d\n", sn, num);
				// return 0;
			} else {
				printf("sn=%dnum=%d\n", sn, num);
				return 0;
			}
		}
	}
}