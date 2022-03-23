#include <stdio.h>
#define PI 3.14
#define VOLUME(x,y) (x*x*PI*y) 
int main() {
	//## 각 문제마다 프로젝트를 하나씩 추가해야 함!
	//	1 밑원의 반지름과 높이를 입력 받아 원기둥의 부피를 구하시오.(단, 매크로 VOLUME(x, y)은 반지름이 x이고 높이 y인 원기둥의 부피)
	puts("반지름과 높이를 입력하시오");
	float r,h;
	scanf_s("%f %f", &r, &h);
	printf("반지름이 %5.3f, 높이가 %5.3f 인 원기둥의 부피 : %10.6f", r, h, VOLUME(r, h));

	return 0;

}