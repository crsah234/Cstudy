#include <stdio.h>

// �м� ������ ��Ÿ���� ����ü fraction�� �������� ���ڿ� �и� ���� ���´�
// ����ü fraction�� �����ϰ�, 2���� �м��� �����Ͽ� ������ ���� �Է��Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
typedef struct fraction {
	int m;
	int n;

}f;

void main() {
	f a;
	puts("���ںи� ù��°�� �Է�:");
	scanf_s("%d%d",&a.n,&a.m);
	

	f b;
	puts("���ںи� �ι�°�� �Է�:");
	scanf_s("%d%d", &b.n, &b.m);

	puts("�� �м��� ����:");
	printf("%d/%d * %d/%d=", a.n, a.m, b.n, b.m);
	printf(" %d/%d",(a.n * b.n), (a.m* b.m));
}