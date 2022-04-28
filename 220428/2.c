#include <stdio.h>
//2 정수변수 주소를 인자로 받아 해당 정수를 3배 하여 리턴 하는 함수를 만들어(  int  triplePointer1(int *) ) 호출해보시오.
int triplePointer(int* a);
int main() {
	int a = 5;
	printf("%d", triplePointer(&a));

}
int triplePointer(int* a) {
	return (*a) * 3;
}