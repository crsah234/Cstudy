#include <stdio.h>
#include <math.h>
//1. ��1 + �� 2 + �� + ��n �� ����Ͻÿ�.(���̺귯�� �Լ� sqrt()�̿�)

int main() {
	int n;
	double sum=0;
	scanf_s("%d", &n);
	for (int i = 1; i<= n; i++) {
		printf("��Ʈ %d ", i);
		sum += sqrt((double)i);
		//  sqrt���ڰ� �Ǽ��̴�.
	}
	puts(" ");
	printf("%lf", sum);
	
}
