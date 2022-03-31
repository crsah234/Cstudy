#include <stdio.h>
//5. 10개의 수를 배열에 입력 받고, 버블정렬 방법으로 정렬하시오
int main() {
	int a[10];
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &a[i]);
	}
	
	// 버블정렬
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9-i; j++) {
			// 9-i를 하는 이유는 어차피 9-i이후의 것은 이미 정해짐.
			if (a[j] > a[j + 1]) {
				int c = a[j];
				int d = a[j + 1];
				a[j] = d;
				a[j + 1] = c;
			}
		}
	}
	for(int i=0;i<10;i++){
		printf("%d ", a[i]);
	}
	
}