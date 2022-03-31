//6. 크기가 3 * 4인 이차원배열을 만들어, 임의의 값(rand() 이용)으로 초기화 한 후 
//각 열(column)별 합계를 구하시오.
#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[3][4], a1=0,a2=0,a3=0,a4=0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			a[i][j] = rand();
			if (j == 0) a1 += a[i][j];
			else if (j == 1) a2 += a[i][j];
			else if (j == 2) a3 += a[i][j];
			else if (j == 3) a4 += a[i][j];
		}
	}

	printf("각 열의 합 : %d, %d, %d %d\n", a1, a2, a3,a4);


}