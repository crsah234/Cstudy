#include <stdio.h>
void swap(int *a,int *b);
int main() {
	int a = 10;
	int b = 20;
	swap(&a, &b);// *a,*b는 안됨. *는 포인터변수에만사용가능하고, &가들어가야함.
	printf("%d %d", a, b);
}
void swap(int* a, int* b) {
	int t;
	t = *a;
	*a = *b;
	*b = t;
	
}