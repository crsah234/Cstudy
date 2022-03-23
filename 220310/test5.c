//5 몸무게와 키를 입력 받아 BMI(body mass index)를 계산하시오.
// (단, BMI = 몸무게 / 키2, 몸무게:kg 단위, 키 : m 단위) (예) 몸무게 55kg, 키 165 cm 라면 = > BMI = 55 / 1.65 2 = 20.2
#define square(m) (m*m)
#define BMI(kg,m) (kg/square(m))
#include <stdio.h>
int main() {
	puts("몸무게와 키를 입력하겠습니다 : ");
	float kg, m;
	puts("몸무게를 먼저 kg으로 입력해주세요(ex : 55kg이면 55)");
	scanf_s("%f", &kg);
	puts("키를 m단위로 입력해주세요(ex : 165cm -> 1.65 m)");
	scanf_s("%f", &m);
	printf("입력받은 몸무게 : %.2f   키 : %.2f", kg, m);
	printf("BMI 지수 : %.4f", BMI(kg, m));
	return 0;
}