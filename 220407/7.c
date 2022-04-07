#include <stdio.h>
//7. 난수를 이용하여 1에서 45 사이의 서로 다른 숫자 5개를 발생시켜 출력하시오.(중복제거하고, 라이브러리 rand(), srand(), time() 사용)
// 중복되는지 한번더 확인 해보기
#include <time.h>
#include <stdlib.h>
int main() {
	srand((long)time(NULL));
	int a[5];
	a[0] = rand() % 45 + 1;
	for (int i = 1; i < 5;i++) {
		a[i] = rand() % 45 + 1;
		for (int j = 0; j < i; j++) {
			if (a[j] == a[i]) {
				a[i]= rand() % 45 + 1; 
				j=0; // 만약 같은게나오면 다시 처음부터 진행하도록.
			}
		}
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}

}