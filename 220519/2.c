#include <stdio.h>
//2 �л��� ���̸�, �����1, ����, �����2, ����, �����3, ������ �� 7���� ����� ������ ����ü�� �����ϰ�, 
//�� ����ü�� �����͸� ���ڷ� �Ͽ� ��������� �����ִ� �Լ��� �ۼ��ϰ�, ȣ���� ���ÿ�.
typedef struct student{
	char name[10];
	char sub1[10];
	int sub1_score;
	char sub2[10];
	int sub2_score;
	char sub3[10];
	int sub3_score;
}st;
double getAverage(st* p);
void main() {
	st os;
	puts("����3���� ���� �Է�:");
	scanf_s("%d %d %d", &os.sub1_score, &os.sub2_score, &os.sub3_score);
	printf("%lf",getAverage(&os));
	}
double getAverage(st* p) {
	int sum = 0;
	sum = (p->sub1_score) + (p->sub2_score) + (p->sub3_score);
	return (sum / 3);
};