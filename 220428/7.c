#include <stdio.h>
void swap2(int * a, int *b);
int main() {
	int a = 2;
	int b = 3;
	int* pa = &a;
	int* pb = &b;
	printf("%p %p\n", pa,pb); // pa,pb�� ���� a,b�� �ּҰ�������������
	swap2(&pa, &pb); // ����  pa->b, pb->a�� ����Ǿ���	
	printf("%p %p", pa, pb);
}
void swap2(int** pp, int** qq) {
	int* t;
	
	puts("swap2");
	
	t = *pp;
	*pp = *qq;
	*qq = t;
	
}
//swap3(int **pp, int **qq)
//a,b,�� ���� �ٲپ��. �ּҰ��ƴ� ���� �ٲپ�� �ѹ��غ���.
