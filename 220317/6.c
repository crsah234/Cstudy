//6 ����ö �̿�Ÿ��� �Է� �޾� ����� ����Ͻÿ�.
//(10Km �̳� : 1250��, 10~50Km : 5Km���� 100�� �߰�, 50Km �ʰ��� : 8Km���� 100�� �߰�; (��)11Km�� 1250 + 100 = 1350��, 15Km�� 1250 + 100 = 1350��)
// ������ x< y<=z �̷�����
#include <stdio.h>
int main() {
	int a; // �Ÿ�
	printf("����ö �̿�Ÿ��� �Է��Ͻÿ�: ");
	scanf_s("%d", &a);
	int money = 1250;; // �⺻���
	int plus_money=100; //�߰����
	if (a <= 10) plus_money = 0;
	else if (10 < a && a <= 50) {

		if (a % 5 != 0) {
			plus_money *= ((a-10) / 5) + 1;
		}
		else if (a % 5 == 0) {
			plus_money *= ((a - 10) / 5);
		}
	}
	else if (a > 50) {
		money += 800; // 50ų�α����� �⺻���+�߰����
		if (a % 8 != 0) {
			plus_money *= ((a-50) / 8) + 1;
		}
		else if (a % 8 == 0) {
			plus_money *= ((a - 50) / 8);
		}
	}
	printf("����ö �̿�Ÿ� : %d   �� ��� : %d", a, money + plus_money);
	return 0;
}