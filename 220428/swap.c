#include <stdio.h>
void swap(int *a,int *b);
int main() {
	int a = 10;
	int b = 20;
	swap(&a, &b);// *a,*b�� �ȵ�. *�� �����ͺ���������밡���ϰ�, &��������.
	printf("%d %d", a, b);
}
void swap(int* a, int* b) {
	int t;
	t = *a;
	*a = *b;
	*b = t;
	
}