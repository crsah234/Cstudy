#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//6 �� ���ڿ��� ���� ��ȯ���ִ� �Լ��� �����, ȣ���� ���ÿ�.(void swapStr(char*, char*))
void swapStr(char* pa, char* pb);
int main() {
	char a[100], b[100];

	puts("���ڿ� a �Է�:");
	gets_s(a,100);
	puts("���ڿ� b �Է�:");
	gets_s(b,100);

	swapStr(a, b);

	printf("%s\n%s", a, b);

}
void swapStr(char* pa, char* pb) {
	char a[100];
	strcpy(a, pa);
	strcpy(pa, pb);
	strcpy(pb, a);


}


