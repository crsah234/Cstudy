//3 삼각형의 세변을 멤버로 가지는 구조체를 정의하고, 삼각형의 면적을 구해주는 함수를 만들어 보시오.
//(면적 S＝√("s(s－a)(s－b)(s－c)"), 여기서 s＝(a＋b＋c) / 2)

#include <stdio.h>
#include <math.h>
typedef struct t {
	double a, b, c;
}t;
double getArea(t *p);
void main() {
	puts("삼각형 세변의길이입력:");
	t a;
	scanf_s("%lf%lf%lf", &a.a, &a.b, &a.c);
	printf("%lf", getArea(&a));
}
double getArea(t* p) {
	double s = (p->a + p->b + p->c) / 2;
	
	return sqrt(s * (s - p->a) * (s - p->b) * (s - p->c));
}