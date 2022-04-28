#include<stdio.h>
//4 세 개의 정수포인터를 인자로 받아 제일 큰 수의 주소를 리턴 하는 함수를 만들고 호출해 보시오. 
//(예)int * maxPosition(int *, int *, int *)

int * maxPosition(int* a, int* b, int* c);
int main() {
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	printf("%p\n%p\n%p\n", &a, &b, &c);
	printf("%p", maxPosition(&a, &b, &c));
}
int* maxPosition(int* a, int* b, int* c) {
	int  max = *a;
	int* maxp; // int *maxp=a; 
	maxp = a; //즉 a의 주소값임.
	if (*b > max && *b > *c)
		maxp = b;
	else if (*c > max && *c > *b)
		maxp = c;
	return maxp;
}