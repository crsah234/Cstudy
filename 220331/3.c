//3. 10개의 값을 입력 받아 일차원 배열에 저장한 후, 그 값들 중에 최댓값을 찾아 출력하시오.
# include <stdio.h>
int main() {
	int max;
	int a[10];
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &a[i]);
	}
	printf("입력받은 수 : ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	max = a[0];
	for (int i = 0; i < 10; i++) {
		if (a[i] >= max) max = a[i];
	}
	puts("");
	printf("최댓값 : %d", max);
}