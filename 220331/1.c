#include <stdio.h>
// 1. 10���� ���� �迭�� �Է� ���� ��, �� ���Һ��� �Ųٷ� ����غ��ÿ�.
int main() {
	int a[10] = { 0 };

	printf("���� �ϳ� �Է��� ����");
	for (int i = 0; i <= 9; i++) {
		
		scanf_s("%d", &a[i]); 
	}
	for (int i = 9; i >= 0; i--) {
		printf("%d ", a[i]);
	}
	

	
	
	return 0;


}