#include <stdio.h>
//2 �������� �ּҸ� ���ڷ� �޾� �ش� ������ 3�� �Ͽ� ���� �ϴ� �Լ��� �����(  int  triplePointer1(int *) ) ȣ���غ��ÿ�.
int triplePointer(int* a);
int main() {
	int a = 5;
	printf("%d", triplePointer(&a));

}
int triplePointer(int* a) {
	return (*a) * 3;
}