#include <stdio.h>
#define PI 3.141592
int main() {
	
// 1�� ����
	int a;
	puts("4�ڸ� ���� �Է� : ");
	scanf_s("%d", &a);
	printf("4�ڸ� ���� �Է� : %d\n", a);
	printf("%10d\n", a);
	printf("%010d\n", a);
	printf("%0+10d\n", a); //  %0+10d - > +00000,,,, %010d - > 00000xxx,,, ä������ ����-��ȣ
	printf("%-10d\n", a);

	//8����������ϱ�
	printf("%o\n", a);
	printf("%010o\n", a);

	//16������ ����ϱ�
	printf("%10x\n", a);
	printf("%0#10x\n", a);


// 2�� ����
	getchar(); // ���� ���� ������.
	//fflush(stdin);
	puts("���� �ϳ� �Է�");
	char b = getchar();
	puts("�Է¹��� ���� ��");
	putchar(b);
	printf("\n");
	printf("%c\n", b);
	printf("%d / %o / %x\n", b,b,b);

// 3�� ���� 
	double r;
	puts("������ �Է� : ");
	scanf_s("%lf", &r);
	printf("�� ������ : %lf / ������ : %lf / ���ѷ� : %lf", r, PI * r * r, 2 * PI * r);





	return 0;
}