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
			//if (a[i] == 1) { 
			//	a[i] = 0; break; } 여기다가 a[i]=1인게나오면 위에 조건 /2부분으로
			// 인해아예 돌지를 않음. 따라서 그 전에서 a[i]=1인것을 걸러야함
			// 근데 귀찮으니 그냥 밑에서 제외하자.
			 if (a[i] % j ==0) {
				 a[i] = 0; break;
			}
		}
	
	}
	for (int i = 0; i < 10; i++) {
		//1도 소수아님.
		if (a[i] != 0&&a[i]!=1) printf("%d ",a[i]);
	}

}
