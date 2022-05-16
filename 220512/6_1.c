#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//6 두 문자열을 서로 교환해주는 함수를 만들고, 호출해 보시오.(void swapStr(char*, char*))
void swapStr(char* pa, char* pb);
int main() {
	char a[100], b[100];

	puts("문자열 a 입력:");
	gets_s(a,100);
	puts("문자열 b 입력:");
	gets_s(b,100);

	swapStr(a, b);

	printf("%s\n%s", a, b);

}
void swapStr(char* pa, char* pb) {
	char a[100];
	strcpy(a, pa);
	strcpy(pa, pb);
	strcpy(pb, a);


}


