//	4 삼항연산자를 이용하여 입력한 세 수의 최댓값을 구하시오.
#include <stdio.h>
int main() {
	float a, b, c;
	float max;
	puts("3개의 숫자를 입력하시오 : ");
	scanf_s("%f %f %f", &a, &b, &c);
	printf("입력받은 수 : %.1f %.1f %.1f\n", a, b, c);
	(a >= b && b >= c) ? (max = a) : (b >= a && b >= c) ? (max = b) : (max = c);
	printf("입력받은 값들중(%.1f,%.1f,%.1f) 최댓값 : %.1f", a, b, c, max);
	return 0;
}

