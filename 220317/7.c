#include <stdio.h>
//7 상속액을 입력 받아 상속세 계산하기.
//(단, 1억 원까지는 10 %, 1억~5억 원 20 %, 5억~10억 원 30 %, 10억~30억 원 40 %, 30억 원 이상 분은 50 % 임.
int main() {
	double a;
	printf("상속액 입력 : ");
	scanf_s("%lf", &a);
	double c = a / 100000000;
	printf("입력한 상속액은 %f억입니다\n", c);
	if (c <= 1) printf("상속세는 10%%입니다. 상속세 : %f", a / 10);
	else if (1 < c && c<= 5) printf("상속세는 20%%입니다. 상속세 : %f", a / 5);
	else if(5<c && c<=10)printf("상속세는 30%%입니다. 상속세 : %f", a / 10 * 3);
	else if(10<c&& c<=30) printf("상속세는 40%%입니다. 상속세 : %f", a / 10*4);
	else if(30< c)printf("상속세는 50%%입니다. 상속세 : %f", a / 2);

	return 0;
}