//4 두 정수를 입력 받아  큰 수를 작은 수로 나눈 결과를 소수점 이하를 포함하여 정확하게 출력하시오.
# include <stdio.h>
int main() {
	printf("두 정수를 입력하시오:");
	int a, b;
	scanf_s("%d%d", &a, &b);
	if (a > b) printf("%d 나누기 %d는 %.10lf입니다.", a, b, ((double)a / (double)b));
	else if (b > a)printf("%d 나누기 %d는 %.10lf입니다.", b, a, ((double)b / (double)a));
	else printf("둘이 같은 수입니다.");

	return 0;
}