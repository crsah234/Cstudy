//7 ���ڿ� 5���� �Է� �޾� ������������� �����Ͽ� ����Ͻÿ�.(2���� �迭 �̿�)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void endic(char *pa);
int main() {
	char a[5][100];
	int i = 0;
	while(i<= 4) {
		gets_s(a[i],100);
		i++;
	}
	char b[100];
	printf("%s %s %s %s %s\n", a[0], a[1], a[2], a[3], a[4]);
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4 - i; j++) {
			// �񱳽� �տ����� �� Ŭ��.
			if (strcmp(a[j],a[j+1])>0) {
				strcpy(b, a[j]);
				strcpy(a[j], a[j + 1]);
				strcpy(a[j + 1], b);
			}
		}
	}
	puts("endic���� �� �������Դϴ�");
	printf("%s %s %s %s %s\n", a[0], a[1], a[2], a[3], a[4]);
	

}