#include <stdio.h>
//1 ���� ���ڸ� �޾� 3�� �Ͽ� ���� �ϴ� �Լ��� �����, (int  tripleValue(int)) ȣ���غ��ÿ�.
int tripleValue(int a);
int main() {
	int a;
	scanf_s("%d", &a);
	printf("%d",tripleValue(a));

}
int tripleValue(int a) {
	return 3 * a;
}