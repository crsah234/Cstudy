//6. ũ�Ⱑ 3 * 4�� �������迭�� �����, ������ ��(rand() �̿�)���� �ʱ�ȭ �� �� 
//�� ��(column)�� �հ踦 ���Ͻÿ�.
#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[3][4], a1=0,a2=0,a3=0,a4=0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			a[i][j] = rand();
			if (j == 0) a1 += a[i][j];
			else if (j == 1) a2 += a[i][j];
			else if (j == 2) a3 += a[i][j];
			else if (j == 3) a4 += a[i][j];
		}
	}

	printf("�� ���� �� : %d, %d, %d %d\n", a1, a2, a3,a4);


}