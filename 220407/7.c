#include <stdio.h>
//7. ������ �̿��Ͽ� 1���� 45 ������ ���� �ٸ� ���� 5���� �߻����� ����Ͻÿ�.(�ߺ������ϰ�, ���̺귯�� rand(), srand(), time() ���)
// �ߺ��Ǵ��� �ѹ��� Ȯ�� �غ���
#include <time.h>
#include <stdlib.h>
int main() {
	srand((long)time(NULL));
	int a[5];
	a[0] = rand() % 45 + 1;
	for (int i = 1; i < 5;i++) {
		a[i] = rand() % 45 + 1;
		for (int j = 0; j < i; j++) {
			if (a[j] == a[i]) {
				a[i]= rand() % 45 + 1; 
				j=0; // ���� �����Գ����� �ٽ� ó������ �����ϵ���.
			}
		}
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}

}