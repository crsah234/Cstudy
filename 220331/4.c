//4. �ڿ����� 1�� �Է� �޾�, �� ���ھ� ����� �ٲپ� ����Ͻÿ�.
//(���� 203 �̸�, two zero three)
// integer�� 9���� ���ϸ� ����.�̸��ΰ�.
#include <stdio.h>
int main() {
	int n, i,aa[20],count=0;
	printf("�ڿ��� 1�� �Է� : \n");
	scanf_s("%d", &n);

	for ( i = 0;; i++) {
		aa[i]= n%10;
		n /= 10;
		count++;
		if (n == 0) break;
	}

	for (int j = i;j>=0; j--) {
		if (aa[j] == 0) printf("zero ");
		else if (aa[j] == 1) printf("one ");
		else if (aa[j] == 2) printf("two ");
		else if (aa[j] == 3) printf("three ");
		else if (aa[j] == 4) printf("four ");
		else if (aa[j] == 5) printf("five ");
		else if (aa[j] == 6) printf("six ");
		else if (aa[j] == 7) printf("seven ");
		else if (aa[j] == 8) printf("eight ");
		else if (aa[j] == 9) printf("nine ");
	}

}
