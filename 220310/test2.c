#include <stdio.h>
int main() {

	//	2 문자 2개를 입력 받아 아스키값이 그 다음인 문자를 출력하시오.
	//	(예, ‘a’와 ‘d’라면 ‘b’와 ‘e’ 출력)
	char a, b;
	puts("문자 2개를 입력하여라(ex : ab)");
	scanf_s("%c", &a,1);
	scanf_s("%c", &b, 1);
	printf("%c %c의 아스키 값이 그 다음인 문자는 %c %c 이다.", a, b, a + 1, b + 1);
	return 0;

}

	