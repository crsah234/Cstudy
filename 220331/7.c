//7. 10���� ���� �迭�� �Է� �ް�, �� �� �Ҽ�(prime number)�� ��� ����Ͻÿ�.
#include <stdio.h>
int main() {
	int a[10];
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &a[i]);
	}
	//�Ҽ� ���ϱ�
	for (int i = 0; i < 10; i++) {
		for (int j = 2;j<=a[i]/2; j++) {
			// �����̻��� ���ڱ��� ���ص� �Ҽ��Ǵ� ����				
			 if (a[i] % j ==0) {
				a[i] = 0; continue;
			}
		}
	
	}
	for (int i = 0; i < 10; i++) {
		//1�� �Ҽ��ƴ�.
		if (a[i] != 0&&a[i]!=1) printf("%d ",a[i]);
	}

}