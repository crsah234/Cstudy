#include <stdio.h>
//6. 배열의 각 원소값을 거꾸로 바꿔주는 함수를 만들고, 호출해 보시오.({1,4,7,5} -> {5,7,4,1} 예:void rev_arr(int *, int))
// 동시에 바꾸는걸로 하여 100개면 50번, 배열의 개수의 절반의 횟수를 반복하여 진행해보기
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
