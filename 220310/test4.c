//	4 ���׿����ڸ� �̿��Ͽ� �Է��� �� ���� �ִ��� ���Ͻÿ�.
#include <stdio.h>
int main() {
	float a, b, c;
	float max;
	puts("3���� ���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%f %f %f", &a, &b, &c);
	printf("�Է¹��� �� : %.1f %.1f %.1f\n", a, b, c);
	(a >= b && b >= c) ? (max = a) : (b >= a && b >= c) ? (max = b) : (max = c);
	printf("�Է¹��� ������(%.1f,%.1f,%.1f) �ִ� : %.1f", a, b, c, max);
	return 0;
}

