#include <stdio.h>
#include <time.h>
#include <stdlib.h>
extern int ary[10];
void init_arr() {
	//�迭 �ʱ�ȭ(rand()�̿�)�ϴ� �Լ�
	srand((long)time(NULL));
	for (int i = 0; i < 10; i++) {
		ary[i] = rand()%10  + 1;
		printf("%d ", ary[i]);
	}
	puts("");
}
void print_sum() {
//�հ� ���
	
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += ary[i];
	}
	printf("������ �հ� : %d", sum);
}