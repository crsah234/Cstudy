//4 ���������� ȸ�� Ȯ���� ���� DB�� �����Ϸ� �Ѵ�.�̸�, ȸ������, ȸ����ȣ(��ȸ���� �г���)�� ����� ������ ����ü�� �����ϰ�,
//ȸ�� 1��� ��ȸ�� 1���� �Է� �޾� ������ �� ����Ͻÿ�.(�� ��ȸ���� ȸ����ȣ�� �ڽ��� �г����� ���� ����ü�� �����Ͻÿ�)
#include <stdio.h>
typedef union memeberNum {
	char nickName[10];
	int memNum;
}checkMem;
typedef struct sports {
	char name[10];
	char Yes_NO;
	checkMem c;
}s;
void main() {
	s os[2];
	for(int i=0;i<2;i++){
		puts("�̸��� �Է��ϼ���:");
		scanf_s("%s", os[i].name,10);
		puts("ȸ������ : Y or N �Է�:");
		
		scanf_s(" %c", &os[i].Yes_NO,1);
		if (os[i].Yes_NO == 'N') {
			puts("��ȸ���Դϴ�. ȸ����ȣ�� �г����� �Է��ϼž��մϴ�.");
			scanf_s("%s", os[i].c.nickName,10);
		}
		else if (os[i].Yes_NO == 'Y') {
			puts("ȸ���Դϴ�. ȸ����ȣ�� �Է����ּ���");
			scanf_s("%d", &os[i].c.memNum);
		}

	}

	for(int i = 0; i < 2; i++){
		if (os[i].Yes_NO == 'Y')
			printf("  ȸ��[�̸� : %10s ȸ����ȣ : %10d]\n", os[i].name, os[i].c.memNum);

		else if (os[i].Yes_NO == 'N')
			printf("��ȸ��[�̸� : %10s   �г��� : %10s]\n", os[i].name, os[i].c.nickName);
	}
}