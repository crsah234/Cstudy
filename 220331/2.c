#include <stdio.h>
#include <stdlib.h>
//2. ũ�Ⱑ 3 * 4�� �������迭�� �����, ������ ��(rand() �̿�)���� �ʱ�ȭ �� �� ����� ���Ͻÿ�.
//(��, int rand() : 0~32767 ����, stdlib.h �ʿ�
int main() {
	int sum = 0;
	int a[3][4] = { 0 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			a[i][j] = rand(); sum += a[i][j];
		}
	}


	printf("�ջ� : %d  ��� : %lf", sum,(double)(sum / 12.0));

}