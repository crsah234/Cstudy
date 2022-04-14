#include <stdio.h>
//(자신의 학번 끝 자리 + 6) % 8 + 1 를 하시오.//20185047 -> 6번

// 동일한 변수 이름을 하나의 파일에서는 전역변수로, 다른 파일에서는 
// 정적전역변수로 이용이 가능한지 예제프로그램을 작성하여 확인하시오
static int var=2;
void printvar();
void printvar() {

	printf("%d", var);
}


