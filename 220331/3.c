//3. 10���� ���� �Է� �޾� ������ �迭�� ������ ��, �� ���� �߿� �ִ��� ã�� ����Ͻÿ�.
# include <stdio.h>
int main() {
	int max;
	int a[10];
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &a[i]);
	}
	printf("�Է¹��� �� : ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	max = a[0];
	for (int i = 0; i < 10; i++) {
		if (a[i] >= max) max = a[i];
	}
	puts("");
	printf("�ִ� : %d", max);
}