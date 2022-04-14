#include <stdio.h>
//1 전역변수를 하나 선언하고 그 전역변수 값만큼 “Hello”를 여러 번 출력하는 
//함수를 만드시오.main()에서 그 전역변수 값을 입력한 후, 함수호출하시오.
int num ;
void prn_hello();
int main() {
	puts("반복할 횟수 입력");
	scanf_s("%d", &num);
	prn_hello();
		


}
