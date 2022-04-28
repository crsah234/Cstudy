#include <stdio.h>
int main() {
	int a[] = { 1,2 };
	int* p = a;//배열이름도 포인터 상수. a[0]의 주소를 가리킴.
	const int b = 3;//복습, const는 초기값을 무조건 줘야함.
	// int *p=&a[0];
}