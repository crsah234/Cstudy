#include <stdio.h>
//4. �Էµ� ���� 10��, 20��, 30��, 40��, 50���� ����Ͻÿ�(���̺귯�� �Լ� pow() ���)
#include <math.h>
int main() {
	int n;
	scanf_s("%d", &n);

	printf("10�� : %lf 20�� : %lf 30�� : %lf 40�� : %lf 50�� : %lf", pow(n, 10), pow(n, 20), pow(n, 30), pow(n, 40), pow(n, 50));

}