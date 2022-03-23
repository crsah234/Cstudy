//	7 비트논리연산자를 이용하여 입력 받은 문자의 아스키값을 이진수로 출력하시오.(가령 ‘A’ 면, 0100 0001 출력)
#include <stdio.h>
int main() {

	puts("%문자 하나를 입력하시오");
	char a;
	scanf_s("%c", &a, 1);
	printf("입력받은 문자 :%c, 이문자의 아스키 값 : %d\n", a, a);
	//이진수로 출력
	int result;
	for (int i = 7; i >= 0; i--) {
		result = a >> i & 1;
		printf("%0d", result);
		if (i == 4) printf(" ");
	
	}

	return 0;



}