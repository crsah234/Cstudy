#include <stdio.h>
#include <math.h>
double danli(int a, double r, int N);
double bokli(int a, double r, int N);
int main() {
	int a=0,N=0;
	double r=0.0;
	printf("����, ������(%)(ex : 1%�� 1), �Ⱓ�� �Է��Ͻÿ�: ");
	scanf_s("%d %lf %d", &a, &r, &N);
	printf("�ܸ� : %5.2lf  ���� : %5.2lf", danli(a, r, N), bokli(a, r, N));
}	
double danli(int a, double r, int N) {
	double sum;
	sum = a * (1 + (r / 100) * N);
	return sum;
}
double bokli(int a, double r, int N) {
	double sum;
	// a*(1+r)��  n��
	sum = a*pow((1 + (r / 100)), N);
	return sum;
}