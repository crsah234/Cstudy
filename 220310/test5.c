//5 �����Կ� Ű�� �Է� �޾� BMI(body mass index)�� ����Ͻÿ�.
// (��, BMI = ������ / Ű2, ������:kg ����, Ű : m ����) (��) ������ 55kg, Ű 165 cm ��� = > BMI = 55 / 1.65 2 = 20.2
#define square(m) (m*m)
#define BMI(kg,m) (kg/square(m))
#include <stdio.h>
int main() {
	puts("�����Կ� Ű�� �Է��ϰڽ��ϴ� : ");
	float kg, m;
	puts("�����Ը� ���� kg���� �Է����ּ���(ex : 55kg�̸� 55)");
	scanf_s("%f", &kg);
	puts("Ű�� m������ �Է����ּ���(ex : 165cm -> 1.65 m)");
	scanf_s("%f", &m);
	printf("�Է¹��� ������ : %.2f   Ű : %.2f", kg, m);
	printf("BMI ���� : %.4f", BMI(kg, m));
	return 0;
}