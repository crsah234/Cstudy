//	7 ��Ʈ�������ڸ� �̿��Ͽ� �Է� ���� ������ �ƽ�Ű���� �������� ����Ͻÿ�.(���� ��A�� ��, 0100 0001 ���)
#include <stdio.h>
int main() {

	puts("%���� �ϳ��� �Է��Ͻÿ�");
	char a;
	scanf_s("%c", &a, 1);
	printf("�Է¹��� ���� :%c, �̹����� �ƽ�Ű �� : %d\n", a, a);
	//�������� ���
	int result;
	for (int i = 7; i >= 0; i--) {
		result = a >> i & 1;
		printf("%0d", result);
		if (i == 4) printf(" ");
	
	}

	return 0;



}