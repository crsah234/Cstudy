// �й� : 20185047. ���� : 5�ܿ� 8�� ����
//
// ������ 1,000,000�� ���, ��ġ �Ⱓ�� �� ������ �Է� �޾� ���� ���� ���� �� �� �ݾ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�

#include <stdio.h>
#include <math.h>
int main() {
	printf("��ġ �Ⱓ �Է�(��)");
	double a;
	scanf_s("%lf", &a);
	double total;
	total = pow(1.045, a)*1000000;
	printf("���� 4.5%% �ѱݾ� : %f", total);
	return 0;
}