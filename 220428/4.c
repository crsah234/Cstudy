#include<stdio.h>
//4 �� ���� ���������͸� ���ڷ� �޾� ���� ū ���� �ּҸ� ���� �ϴ� �Լ��� ����� ȣ���� ���ÿ�. 
//(��)int * maxPosition(int *, int *, int *)

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
	maxp = a; //�� a�� �ּҰ���.
	if (*b > max && *b > *c)
		maxp = b;
	else if (*c > max && *c > *b)
		maxp = c;
	return maxp;
}