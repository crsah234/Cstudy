#include <stdio.h>
#define PI 3.141592
int main() {
	
// 1번 문제
	int a;
	puts("4자리 정수 입력 : ");
	scanf_s("%d", &a);
	printf("4자리 정수 입력 : %d\n", a);
	printf("%10d\n", a);
	printf("%010d\n", a);
	printf("%0+10d\n", a); //  %0+10d - > +00000,,,, %010d - > 00000xxx,,, 채워넣을 숫자-부호
	printf("%-10d\n", a);

	//8진수로출력하기
	printf("%o\n", a);
	printf("%010o\n", a);

	//16진수로 출력하기
	printf("%10x\n", a);
	printf("%0#10x\n", a);


// 2번 문제
	getchar(); // 엔터 버퍼 삭제용.
	//fflush(stdin);
	puts("문자 하나 입력");
	char b = getchar();
	puts("입력받은 문자 값");
	putchar(b);
	printf("\n");
	printf("%c\n", b);
	printf("%d / %o / %x\n", b,b,b);

// 3번 문제 
	double r;
	puts("반지름 입력 : ");
	scanf_s("%lf", &r);
	printf("원 반지름 : %lf / 원면적 : %lf / 원둘레 : %lf", r, PI * r * r, 2 * PI * r);





	return 0;
}