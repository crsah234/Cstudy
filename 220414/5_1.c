//5 함수(예를 들어 foo() 함수) 자신이 몇 번 호출되었는지 리턴해주는 
//함수를 만들고 여러 번 호출하여 검증해보시오.
#include <stdio.h>
int foo();

int main() {
	printf("%d\n", foo());
	printf("%d\n", foo());
}


int foo() {
	static int count;
	
	count+=1;
	return count;
}