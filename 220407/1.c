#include <stdio.h>
#include <math.h>
//1. √1 + √ 2 + … + √n 을 계산하시오.(라이브러리 함수 sqrt()이용)

int main() {
	int n;
	double sum=0;
	scanf_s("%d", &n);
	for (int i = 1; i<= n; i++) {
		printf("루트 %d ", i);
		sum += sqrt((double)i);
		//  sqrt인자가 실수이다.
	}
	puts(" ");
	printf("%lf", sum);
	
}
