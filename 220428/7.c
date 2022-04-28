#include <stdio.h>
void swap2(int * a, int *b);
int main() {
	int a = 2;
	int b = 3;
	int* pa = &a;
	int* pb = &b;
	printf("%p %p\n", pa,pb); // pa,pb의 값은 a,b의 주소값을가지고있음
	swap2(&pa, &pb); // 이후  pa->b, pb->a로 변경되야함	
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
//a,b,의 값을 바꾸어라. 주소가아닌 값을 바꾸어라 한번해보기.
