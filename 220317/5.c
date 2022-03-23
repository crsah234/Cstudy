//5 몸무게와 키를 입력하여 BMI(body mass index)를 구하고, 18미만이면 “저체중”, 18~25이면 “정상”, 25초과면 “과체중”을 출력하시오.
//(단, BMI = 몸무게 / 키2, 몸무게:kg 단위, 키 : m 단위)  (예) 몸무게 55kg, 키 1.65 m 라면 = > BMI = 55 / 1.65 2 = 20.2
#include <stdio.h>
# define square(a) ( a*a)
int main() {
	int a;
	float b;
	printf("몸무게를 입력하시오 : ");
	scanf_s("%d", &a);
	printf("키를 단위 m로 입력하시오(ex : 1.65)");
	scanf_s("%f", &b);
	float BMI = a / square(b);
	printf(" BMI :  %f\n", BMI);

	if (BMI < 18) printf("저체중");
	else if (BMI >= 18 && BMI<=25) printf("정상");
	else if (BMI > 25) printf("과체중");

}