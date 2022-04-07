#include <stdio.h>
#include <math.h>
double danli(int a, double r, int N);
double bokli(int a, double r, int N);
int main() {
	int a=0,N=0;
	double r=0.0;
	printf("원금, 이자율(%)(ex : 1%면 1), 기간을 입력하시오: ");
	scanf_s("%d %lf %d", &a, &r, &N);
	printf("단리 : %5.2lf  복리 : %5.2lf", danli(a, r, N), bokli(a, r, N));
}	
double danli(int a, double r, int N) {
	double sum;
	sum = a * (1 + (r / 100) * N);
	return sum;
}
double bokli(int a, double r, int N) {
	double sum;
	// a*(1+r)의  n승
	sum = a*pow((1 + (r / 100)), N);
	return sum;
}