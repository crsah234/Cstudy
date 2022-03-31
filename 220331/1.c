#include <stdio.h>
// 1. 10개의 수를 배열에 입력 받은 후, 끝 원소부터 거꾸로 출력해보시오.
int main() {
	int a[10] = { 0 };

	printf("숫자 하나 입력후 엔터");
	for (int i = 0; i <= 9; i++) {
		
		scanf_s("%d", &a[i]); 
	}
	for (int i = 9; i >= 0; i--) {
		printf("%d ", a[i]);
	}
	

	
	
	return 0;


}