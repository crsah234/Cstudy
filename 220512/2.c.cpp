//2 ���ڿ��� �Է� �޾�(gets() �̿�), 3 ���ھ� �߶� ���� �� ���ο� ����Ͻÿ�.
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