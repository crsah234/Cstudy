#include <stdio.h>
int main() {

	//	2 ���� 2���� �Է� �޾� �ƽ�Ű���� �� ������ ���ڸ� ����Ͻÿ�.
	//	(��, ��a���� ��d����� ��b���� ��e�� ���)
	char a, b;
	puts("���� 2���� �Է��Ͽ���(ex : ab)");
	scanf_s("%c", &a,1);
	scanf_s("%c", &b, 1);
	printf("%c %c�� �ƽ�Ű ���� �� ������ ���ڴ� %c %c �̴�.", a, b, a + 1, b + 1);
	return 0;

}

	