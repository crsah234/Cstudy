#include <stdio.h>
#include <time.h>
#include <stdlib.h>
extern int ary[10];
void init_arr() {
	//배열 초기화(rand()이용)하는 함수
	srand((long)time(NULL));
	for (int i = 0; i < 10; i++) {
		ary[i] = rand()%10  + 1;
		printf("%d ", ary[i]);
	}
	puts("");
}
void print_sum() {
//합계 출력
	
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += ary[i];
	}
	printf("베열의 합계 : %d", sum);
}