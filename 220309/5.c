#include <stdio.h>


//5 1000������ ��Ź�Ͽ� 2�� �� �ް� �Ǵ� �Ѿ��� ����Ͻÿ�. (�������� 4 %)

int main() {
	double deposit = 10000000;
	double after1Y_deposit = deposit * 1.04;
	double after2Y_deposit = after1Y_deposit * 1.04;
	printf("2���Ŀ� �޴� �Ѿ� : %.2lf", after2Y_deposit);
	return(0);
}


