//2 세변의 길이를 입력 받아 삼각형의 둘레를 구하시오.(단 삼각형이 형성 안 되는 경우 체크하여 오류 처리 할 것, 가령 a >= b + c이면 삼각형 안 됨)
#include <stdio.h>
int main() {
	printf("삼각형의 세변의 길이를 입력하시오 :");
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a >= b + c || b >= a + c || c >= a + b) printf("삼각형이 형성이 안되는 경우입니다.");
	else printf("삼각형의 둘레는 %d입니다.", a + b + c);

	return 0;
}