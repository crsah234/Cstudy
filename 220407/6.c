#include <stdio.h>
//6. �迭�� �� ���Ұ��� �Ųٷ� �ٲ��ִ� �Լ��� �����, ȣ���� ���ÿ�.({1,4,7,5} -> {5,7,4,1} ��:void rev_arr(int *, int))
// ���ÿ� �ٲٴ°ɷ� �Ͽ� 100���� 50��, �迭�� ������ ������ Ƚ���� �ݺ��Ͽ� �����غ���
void rev_arr(int a[],int n);
int main() {
	int a[] = { 1,2,3,4 };
	rev_arr(a, 4);
	printf("%d %d %d %d", a[0], a[1], a[2], a[3]);
}
void rev_arr(int a[], int n) {
	int b[10];
	for (int i = 0; i < n; i++) {
		b[i] = a[4-1-i];
		//printf("%d", b[i]);
	}
	for (int i= 0; i < n; i++) {
		//printf("%d",a[n]);
		a[i] = b[i];
	}
}
