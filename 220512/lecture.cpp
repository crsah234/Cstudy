#include <stdio.h>
int main() {
// # 배열 선언 시 초기화 방법
	//마지막에 \0을 빼면 대입시는 이상없으나 출력시 문제가 생김
	char java[] = { 'a','b','\0' };
	char pytjon[] = "python";
	char p2[3] = "12";		// 크기 지정시 크기+1만큼의 수 지정해야함.
	
// 문자열 출력 %s , 문자출력은 %c
	// 배열이름 == 문자열의 첫 주소
	printf("%s\n", java);
	puts(pytjon);

// 문자열 상수의 주소를 문자 포인터에 저장하는 방식
	int i = 0;
	// 옛버전에는 const가 없어도 됬으나 지금은 const가  들어가야 상수문자열넣을수있음
	const char *jav ="java"; // "java"문자열의 j의 주소가 포인터변수 java에 들어감

	// 

	// 출력하기
	while (java[i]) {
		printf("%c", java[i++]);
	}
	char* p = java;
	while (*p) {
		printf("%c", *p++);
	}

	// 문자열의 입출력
	char a[100];
	printf("문자열 입력:");
	scanf_s("%s", a, 100);
	printf("%s", a);
	char b[100];
	printf("문자열 입력:");
	scanf_s("%s", b, 100);
	printf("%s", b);




}