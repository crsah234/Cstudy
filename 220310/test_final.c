// �й� : 20185047. ���� : 5�ܿ� 8�� ����
//
// ������ 1,000,000�� ���, ��ġ �Ⱓ�� �� ������ �Է� �޾� ���� ���� ���� �� �� �ݾ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�

#include <stdio.h>
#include <math.h>
int main() {
	print("��ġ �Ⱓ �Է�(��)");
	float a;
	scanf_s("%f", &a);
	float total;
	total = pow(1000000, 1.045);
	printf("���� 4.5%% �ѱݾ� : %f", total);
	return 0;
}