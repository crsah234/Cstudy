#include <stdio.h>

//3  ������(3.14)�� ���(const)�� �����ϰ�, 
// �������� 6400Km�� ������ �ѷ����̸� ���Ͻÿ�.(��, ������ ũ�� = 2 * �� * r)
int main() {
	const float PI = 3.14;
	float r = 6400;
	float round = 2 * PI * r;
	printf("%f", round);
	return(0);
}


