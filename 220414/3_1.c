#include <stdio.h>
//3 �迭 2���� �Է� �޾�, ���� ÷���� �� ���� �� ū ������ �̷���� �迭��
//�����ϴ� �Լ� �����(int* maxA(int a[], int b[], int sz)
 //   (���� ���{ 4,5,8,.. }��{ 1,7,3,.. }�� ���ڷ� ������{ 4,7,8,.. }��
  //      ������.����� �迭 ù ������ �ּҸ� ������)
int a1[10], a2[10];
int* maxA(int a[], int b[], int sz);
int main() {

	printf("ù �迭 ���Ұ� �Է�(5��)");
	for (int a = 0; a < 5 ;a++) {
		scanf_s("%d", &a1[a]);
	}

	printf("�ι�° �迭 ���Ұ� �Է�(5��)");
	for (int a = 0; a < 5 ; a++) {
		scanf_s("%d", &a2[a]);
	}
	//������ �� �迭 ���
	int* p;
	p = maxA(a1, a2, 5);
	for (int i = 0; i < 5; i++) {
		printf("%d ",p[i]); // �����ͽ� : *(p+i) / *p++
	}

}
int* maxA(int a[], int b[], int sz) {// integer pointer����ȯ, �� �迭�� ù �ּҸ� ��ȯ�ϴٴ� ��.
	 static int c[100]; // ���ο� ���� ���� �Ȼ�����Բ� �ϱ� static�� ������� ���� �� �����. �ٵ� ���� ������ ���� �ٸ�.
	for (int i = 0; i < sz; i++) {
		if (a[i] > b[i]) c[i] = a[i];
		else c[i] = b[i];
	
	}
	return c; //c[0];
}