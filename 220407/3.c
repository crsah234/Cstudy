#include <stdio.h>
//3. �Էµ� 3�� �� ���� ū ���� ���� ���� ���� ���Ͻÿ�.(ū �� ���ؼ� �����ϴ� �Լ���, ���� �� ���ؼ� �����ϴ� �Լ��� ���� ����)
int getMax(int a, int b, int c);
int getMin(int a, int b, int c);
int main() {

	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	printf("%d %d %d �� ���� ū�� : %d\n",a,b,c,getMax(a, b, c));
	printf("%d %d %d �� ���� ���� �� : %d",a,b,c,getMin(a, b, c));


}

int getMax(int a, int b, int c) {
	int max=a;
	if (b >= max && b >= c)
		max = b;

	else if (c >= b && c >= max)
		max = c;
	return max;
}
int getMin(int a, int b, int c) {
	int min = a;
	if (b <= min && b <= c)
		min = b;

	else if (c <= b && c <= min)
		min = c;
	return min;
}