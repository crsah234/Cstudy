//3 �ﰢ���� ������ ����� ������ ����ü�� �����ϰ�, �ﰢ���� ������ �����ִ� �Լ��� ����� ���ÿ�.
//(���� S����("s(s��a)(s��b)(s��c)"), ���⼭ s��(a��b��c) / 2)

#include <stdio.h>
#include <math.h>
typedef struct t {
	double a, b, c;
}t;
double getArea(t *p);
void main() {
	puts("�ﰢ�� �����Ǳ����Է�:");
	t a;
	scanf_s("%lf%lf%lf", &a.a, &a.b, &a.c);
	printf("%lf", getArea(&a));
}
double getArea(t* p) {
	double s = (p->a + p->b + p->c) / 2;
	
	return sqrt(s * (s - p->a) * (s - p->b) * (s - p->c));
}