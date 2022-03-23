// 학번 : 20185047. 문제 : 5단원 8번 문제
//
// 원금이 1,000,000인 경우, 예치 기간을 년 단위로 입력 받아 복리 이자 만기 시 총 금액을 출력하는 프로그램을 작성하시오

#include <stdio.h>
#include <math.h>
int main() {
	printf("예치 기간 입력(년)");
	double a;
	scanf_s("%lf", &a);
	double total;
	total = pow(1.045, a)*1000000;
	printf("이율 4.5%% 총금액 : %f", total);
	return 0;
}