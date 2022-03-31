#include <stdio.h>
#include <stdlib.h>
//2. 크기가 3 * 4인 이차원배열을 만들어, 임의의 값(rand() 이용)으로 초기화 한 후 평균을 구하시오.
//(단, int rand() : 0~32767 리턴, stdlib.h 필요
int main() {
	int sum = 0;
	int a[3][4] = { 0 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			a[i][j] = rand(); sum += a[i][j];
		}
	}


	printf("합산 : %d  평균 : %lf", sum,(double)(sum / 12.0));

}