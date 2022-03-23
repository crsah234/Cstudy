#include <stdio.h>
//## 각 문제마다 프로젝트를 하나씩 추가해야 함!

//2  원주율(3.14)을 매크로상수로 선언하고, 반지름이 6400Km인 지구의 둘레길이를 구하시오.(단, 원주의 크기 = 2 * π * r)

#define PI 3.14
int main() {
	int r = 6400;
	float round = 2 * PI * r;
	printf("%f", round);
	return(0);
}


