#include<stdio.h>
//3 �� ���� ���������͸� ���ڷ� �޾� ���� ū ���� ���� �ϴ� �Լ��� ����� ȣ���� ���ÿ�.
// (��)int  maxValue(int *, int *, int *)

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