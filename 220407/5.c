#include <stdio.h>
//5. �迭�� ���ڷ� �޾� �ִ밪�� ���� ���Ҹ� ���� ���ִ� �Լ��� �����, �� �Լ��� �̿��Ͽ� �Էµ� ���� �� �� �ִ밪�� ����Ͻÿ�.
double getMax(double ary[], int n);
int main() {
	double a[10];
	printf("10�� ���ڸ� �Է��Ͻÿ�");
	int i = 0;
	for (; i < 10; i++) {
		scanf_s("%lf", &a[i]);
	}
	printf("�Է¹��� �迭 �� ���� ū ���� : %5.2lf �Դϴ�.", getMax(a, 10));


}
double getMax(double ary[], int n) {
	double max = ary[0];
	for (int i = 1; i < n; i++) {
		if (ary[i] >= max) max = ary[i];
	}
	return max;
}