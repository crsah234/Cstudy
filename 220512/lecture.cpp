#include <stdio.h>
int main() {
// # �迭 ���� �� �ʱ�ȭ ���
	//�������� \0�� ���� ���Խô� �̻������ ��½� ������ ����
	char java[] = { 'a','b','\0' };
	char pytjon[] = "python";
	char p2[3] = "12";		// ũ�� ������ ũ��+1��ŭ�� �� �����ؾ���.
	
// ���ڿ� ��� %s , ��������� %c
	// �迭�̸� == ���ڿ��� ù �ּ�
	printf("%s\n", java);
	puts(pytjon);

// ���ڿ� ����� �ּҸ� ���� �����Ϳ� �����ϴ� ���
	int i = 0;
	// ���������� const�� ��� ������ ������ const��  ���� ������ڿ�����������
	const char *jav ="java"; // "java"���ڿ��� j�� �ּҰ� �����ͺ��� java�� ��

	// 

	// ����ϱ�
	while (java[i]) {
		printf("%c", java[i++]);
	}
	char* p = java;
	while (*p) {
		printf("%c", *p++);
	}

	// ���ڿ��� �����
	char a[100];
	printf("���ڿ� �Է�:");
	scanf_s("%s", a, 100);
	printf("%s", a);
	char b[100];
	printf("���ڿ� �Է�:");
	scanf_s("%s", b, 100);
	printf("%s", b);




}