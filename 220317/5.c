//5 �����Կ� Ű�� �Է��Ͽ� BMI(body mass index)�� ���ϰ�, 18�̸��̸� ����ü�ߡ�, 18~25�̸� ������, 25�ʰ��� ����ü�ߡ��� ����Ͻÿ�.
//(��, BMI = ������ / Ű2, ������:kg ����, Ű : m ����)  (��) ������ 55kg, Ű 1.65 m ��� = > BMI = 55 / 1.65 2 = 20.2
#include <stdio.h>
# define square(a) ( a*a)
int main() {
	int a;
	float b;
	printf("�����Ը� �Է��Ͻÿ� : ");
	scanf_s("%d", &a);
	printf("Ű�� ���� m�� �Է��Ͻÿ�(ex : 1.65)");
	scanf_s("%f", &b);
	float BMI = a / square(b);
	printf(" BMI :  %f\n", BMI);

	if (BMI < 18) printf("��ü��");
	else if (BMI >= 18 && BMI<=25) printf("����");
	else if (BMI > 25) printf("��ü��");

}