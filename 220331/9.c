#include <stdio.h>
//Ȱ�� 3�� : �迭���� ��� ������ ���� ��� 10�� ������Ű�� ���α׷��� �ۼ��Ͻÿ�
int main() {

	int data[] = { 3,21,35,57,24,82,8 };
	for (int i = 0; i < sizeof(data)/(sizeof(data[i])); i++) {
		data[i] = data[i] + 10;
		printf("%d ", data[i]);
	}


}