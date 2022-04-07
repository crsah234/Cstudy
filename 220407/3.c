#include <stdio.h>
//3. 입력된 3수 중 가장 큰 값과 가장 작은 값을 구하시오.(큰 값 구해서 리턴하는 함수와, 작은 값 구해서 리턴하는 함수를 각각 구현)
int getMax(int a, int b, int c);
int getMin(int a, int b, int c);
int main() {

	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	printf("%d %d %d 중 가장 큰값 : %d\n",a,b,c,getMax(a, b, c));
	printf("%d %d %d 중 가장 작은 값 : %d",a,b,c,getMin(a, b, c));


}

int getMax(int a, int b, int c) {
	int max=a;
	if (b >= max && b >= c)
		max = b;

	else if (c >= b && c >= max)
		max = c;
	return max;
}
int getMin(int a, int b, int c) {
	int min = a;
	if (b <= min && b <= c)
		min = b;

	else if (c <= b && c <= min)
		min = c;
	return min;
}