#include <stdio.h>
//a(정수)의 b(자연수)승을 해 주는 함수를 직접 만들고, 호출해 보시오.
int ab(int a, int b);
int main() {
	int m, n;
	scanf_s("%d%d", &m, &n);
	printf("%d",ab(m, n));


}
int ab(int a, int b) {
	int c = 1;
	for (int i = 0; i < b; i++) {
		c *= a;
	}
	return c;
}