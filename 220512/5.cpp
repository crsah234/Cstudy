//5 ���ڿ��� �Ųٷ� ������ִ� �Լ��� �����, ȣ���� ���ÿ�.
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