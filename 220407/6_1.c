#include <stdio.h>
//6. �迭�� �� ���Ұ��� �Ųٷ� �ٲ��ִ� �Լ��� �����, ȣ���� ���ÿ�.({1,4,7,5} -> {5,7,4,1} ��:void rev_arr(int *, int))
// ���ÿ� �ٲٴ°ɷ� �Ͽ� 100���� 50��, �迭�� ������ ������ Ƚ���� �ݺ��Ͽ� �����غ���
void rev_arr(int a[], int n);
int main() {
	int a[10];
	for (int i= 0; i < 10; i++) {
		scanf_s("%d", &a[i]);
	}
	rev_arr(a, 10);
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
}
void rev_arr(int a[], int n) {
	for (int i = 0; i < n / 2; i++) {
		int a1, a2;
		a1 = a[i];
		a2 = a[n - i - 1];
		a[i] = a2;
		a[n - i - 1] = a1;
	}
}