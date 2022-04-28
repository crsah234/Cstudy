#include<stdio.h>
//6 수업시간에 구현한 swap()함수를 그대로 이용하여 배열의 bubble 정렬을 구현하시오
void swap(int* a, int* b);
void bubble(int* a, int b);
int main() {
	int a[] = {3,4,2,1};
	bubble(a,4);
	printf("%d%d%d%d", a[0], a[1], a[2], a[3]);
}
void swap(int* a, int* b) {
	int t;
	t = *a;
	*a = *b;
	*b = t;

}
void bubble(int* a,int b) {
	for (int i = 0; i < b-1; i++) {
		for (int j = 0; j <b-1-i ; j++) {
			if(*(a+j)>*(a+j+1))  //a[j] > a[j+1]
				swap((a+j),(a+j+1)); //&a[j] &a[j+1]
		}
	}
}