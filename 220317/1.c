
//	(예)1억3천만원이면 상속세는 1억 * 10 % +3천만 * 20 % = 1600 만원임)
#include<stdio.h>
//1 입력 받은 문자가 대문자이면 소문자로, 소문자이면 대문자로, 그 외는 그대로 출력하시오.
int main() {
	char a;
	printf("문자 하나 입력 : ");
	scanf_s("%c", &a, 1);
	if (65 <= a && a < 97) {
		printf("입력받은 문자는 대문자 %c, 소문자로 출력 : %c", a,a + 32);
	}
	else if (a >= 97) {
		printf("입력받은 문자는 소문자 %c, 대문자로 출력 : %c",a ,a - 32);
	}
	else printf("그대로 출력 : %c", a);

}