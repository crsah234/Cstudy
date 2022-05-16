//5 문자열을 거꾸로 출력해주는 함수를 만들고, 호출해 보시오.
#include <stdio.h>
#include <string.h>
void printReverse(char* a,int n);
int main() {
	char a[100];
	gets_s(a);
	printReverse(a,strlen(a));

}
void printReverse(char* a,int n) {
	while (n >= 0) {
		printf("%c", a[n--]);
	}
}