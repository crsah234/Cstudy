#include<stdio.h>
//3 세 개의 정수포인터를 인자로 받아 제일 큰 수를 리턴 하는 함수를 만들고 호출해 보시오.
// (예)int  maxValue(int *, int *, int *)

int maxValue(int* a, int* b, int* c);
int main() {
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	printf("%d", maxValue(&a, &b, &c));
}
int maxValue(int* a, int* b, int* c) {
	int max = *a;
	if (*b > max && *b > *c)
		max = *b;
	else if (*c > max && *c > *b)
		max = *c;

	return max;

}