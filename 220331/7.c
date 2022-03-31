//7. 10개의 수를 배열에 입력 받고, 그 중 소수(prime number)를 모두 출력하시오.
#include <stdio.h>
int main() {
	int a[10];
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &a[i]);
	}
	//소수 구하기
	for (int i = 0; i < 10; i++) {
		for (int j = 2;j<=a[i]/2; j++) {
			// 절반이상의 숫자까지 안해도 소수판단 가능				
			 if (a[i] % j ==0) {
				a[i] = 0; continue;
			}
		}
	
	}
	for (int i = 0; i < 10; i++) {
		//1도 소수아님.
		if (a[i] != 0&&a[i]!=1) printf("%d ",a[i]);
	}

}