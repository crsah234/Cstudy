#include <stdio.h>
//1 정수 인자를 받아 3배 하여 리턴 하는 함수를 만들고, (int  tripleValue(int)) 호출해보시오.
int tripleValue(int a);
int main() {
	int a;
	scanf_s("%d", &a);
	printf("%d",tripleValue(a));

}
int tripleValue(int a) {
	return 3 * a;
}