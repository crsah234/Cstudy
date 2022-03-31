#include <stdio.h>
//활용 3번 : 배열에서 모든 원소의 값을 모두 10씩 증가시키는 프로그램을 작성하시오
int main() {

	int data[] = { 3,21,35,57,24,82,8 };
	for (int i = 0; i < sizeof(data)/(sizeof(data[i])); i++) {
		data[i] = data[i] + 10;
		printf("%d ", data[i]);
	}


}