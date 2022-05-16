#include <stdio.h>
#include <string.h>
////4 입력 받은 문자열에서 맨 가운데 문자를 출력하시오.(길이가 짝수면 2개 출력)
void showmiddle(char* p, int a);
int main() {
	char a[100];
	puts("문자열 입력:");
	gets_s(a);
	showmiddle(a,strlen(a));
}
void showmiddle(char* p, int a) {
	int i = 0;
	if (a % 2 == 0) {
		printf("%c%c",p[(int)(a/2)-1], p[(int)(a / 2)]);
	}
	else {
		printf("%c", p[(int)(a / 2)]);
	}

}