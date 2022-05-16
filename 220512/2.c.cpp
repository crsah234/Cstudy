//2 문자열을 입력 받아(gets() 이용), 3 글자씩 잘라 각각 새 라인에 출력하시오.
#include<stdio.h>
#include <string.h>
int main() {
	char a[100];
	gets_s(a);
	int count = 0;
	char* p = a;
	while (*p) {
		count++;
		printf("%c", *p++);
		if (count % 3 == 0)
			printf("\n");
	}
	

}