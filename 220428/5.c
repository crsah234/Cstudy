#include <stdio.h>
//5 포인터 인자의 해당변수를 N만큼 더해주는 함수를 만드시오.(  void   addN(int *p, int N)   )
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