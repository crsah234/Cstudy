#include <stdio.h>

//3  원주율(3.14)을 상수(const)로 선언하고, 
// 반지름이 6400Km인 지구의 둘레길이를 구하시오.(단, 원주의 크기 = 2 * π * r)
int main() {
	const float PI = 3.14;
	float r = 6400;
	float round = 2 * PI * r;
	printf("%f", round);
	return(0);
}


