#include <stdio.h>
//5. 배열을 인자로 받아 최대값을 가진 원소를 리턴 해주는 함수를 만들고, 이 함수를 이용하여 입력된 여러 수 중 최대값을 출력하시오.
double getMax(double ary[], int n);
int main() {
	double a[10];
	printf("10개 숫자를 입력하시오");
	int i = 0;
	for (; i < 10; i++) {
		scanf_s("%lf", &a[i]);
	}
	printf("입력받은 배열 중 가장 큰 값은 : %5.2lf 입니다.", getMax(a, 10));


}
double getMax(double ary[], int n) {
	double max = ary[0];
	for (int i = 1; i < n; i++) {
		if (ary[i] >= max) max = ary[i];
	}
	return max;
}