#include <stdio.h>
//5 ������ ������ �ش纯���� N��ŭ �����ִ� �Լ��� ����ÿ�.(  void   addN(int *p, int N)   )
void addN(int* p, int N);
int main() {
	int a, b;
	a = 5;
	b = 4;
	addN(&a, b);
}
void addN(int* p, int N) {
	printf("%d", * p + N);

}