#include <stdio.h>
//a(����)�� b(�ڿ���)���� �� �ִ� �Լ��� ���� �����, ȣ���� ���ÿ�.
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