#include <stdio.h>


//5 1000만원을 예탁하여 2년 후 받게 되는 총액을 계산하시오. (연이율은 4 %)

int main() {
	double deposit = 10000000;
	double after1Y_deposit = deposit * 1.04;
	double after2Y_deposit = after1Y_deposit * 1.04;
	printf("2년후에 받는 총액 : %.2lf", after2Y_deposit);
	return(0);
}


