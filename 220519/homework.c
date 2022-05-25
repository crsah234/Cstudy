#include <stdio.h>

// 분수 정보를 나타내는 구조체 fraction는 정수형의 분자와 분모 정모를 갖는다
// 구조체 fraction을 정의하고, 2개의 분수를 선언하여 적당한 값을 입력하여 출력하는 프로그램을 작성하시오
typedef struct fraction {
	int m;
	int n;

}f;

void main() {
	f a;
	puts("분자분모 첫번째것 입력:");
	scanf_s("%d%d",&a.n,&a.m);
	

	f b;
	puts("분자분모 두번째것 입력:");
	scanf_s("%d%d", &b.n, &b.m);

	puts("두 분수의 곱셈:");
	printf("%d/%d * %d/%d=", a.n, a.m, b.n, b.m);
	printf(" %d/%d",(a.n * b.n), (a.m* b.m));
}