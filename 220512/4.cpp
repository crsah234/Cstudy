#include <stdio.h>
#include <string.h>
////4 �Է� ���� ���ڿ����� �� ��� ���ڸ� ����Ͻÿ�.(���̰� ¦���� 2�� ���)
void showmiddle(char* p, int a);
int main() {
	char a[100];
	puts("���ڿ� �Է�:");
	gets_s(a);
	showmiddle(a,strlen(a));
}
void showmiddle(char* p, int a) {
	int i = 0;
	if (a % 2 == 0) {
		printf("%c%c",p[(int)(a/2)-1], p[(int)(a / 2)]);
	}
	else {
		printf("%c", p[(int)(a / 2)]);
	}

}