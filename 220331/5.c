#include <stdio.h>
//5. 10���� ���� �迭�� �Է� �ް�, �������� ������� �����Ͻÿ�
int main() {
	int a[10];
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &a[i]);
	}
	
	// ��������
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9-i; j++) {
			// 9-i�� �ϴ� ������ ������ 9-i������ ���� �̹� ������.
			if (a[j] > a[j + 1]) {
				int c = a[j];
				int d = a[j + 1];
				a[j] = d;
				a[j + 1] = c;
			}
		}
	}
	for(int i=0;i<10;i++){
		printf("%d ", a[i]);
	}
	
}