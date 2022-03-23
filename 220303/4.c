#include <stdio.h>

//4 우리나라 국내총생산액을 구하시오.
// 일인당 국내총생산은 33, 000달러이고, 
// 우리나라 인구는 52, 000, 000명이다.(오버플로 주의!)


int main() {
	double per_GDP = 33000;
	double K_GDP = per_GDP * 52000000;
	printf("국내총생산량 : %lf", K_GDP);
	return(0);
}


