//4 �� ������ �Է� �޾�  ū ���� ���� ���� ���� ����� �Ҽ��� ���ϸ� �����Ͽ� ��Ȯ�ϰ� ����Ͻÿ�.
# include <stdio.h>
int main() {
	printf("�� ������ �Է��Ͻÿ�:");
	int a, b;
	scanf_s("%d%d", &a, &b);
	if (a > b) printf("%d ������ %d�� %.10lf�Դϴ�.", a, b, ((double)a / (double)b));
	else if (b > a)printf("%d ������ %d�� %.10lf�Դϴ�.", b, a, ((double)b / (double)a));
	else printf("���� ���� ���Դϴ�.");

	return 0;
}