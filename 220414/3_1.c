#include <stdio.h>
//3 배열 2개를 입력 받아, 같은 첨자의 두 원소 중 큰 값으로 이루어진 배열을
//리턴하는 함수 만들기(int* maxA(int a[], int b[], int sz)
 //   (예를 들어{ 4,5,8,.. }와{ 1,7,3,.. }을 인자로 받으면{ 4,7,8,.. }를
  //      리턴함.사실은 배열 첫 원소의 주소를 리턴함)
int a1[10], a2[10];
int* maxA(int a[], int b[], int sz);
int main() {

	printf("첫 배열 원소값 입력(5개)");
	for (int a = 0; a < 5 ;a++) {
		scanf_s("%d", &a1[a]);
	}

	printf("두번째 배열 원소값 입력(5개)");
	for (int a = 0; a < 5 ; a++) {
		scanf_s("%d", &a2[a]);
	}
	//포인터 중 배열 방식
	int* p;
	p = maxA(a1, a2, 5);
	for (int i = 0; i < 5; i++) {
		printf("%d ",p[i]); // 포인터식 : *(p+i) / *p++
	}

}
int* maxA(int a[], int b[], int sz) {// integer pointer를반환, 즉 배열의 첫 주소를 반환하다는 뜻.
	 static int c[100]; // 메인에 가도 값이 안사라지게끔 하기 static이 사라지면 값이 다 사라짐. 근데 빌드 버젼에 따라 다름.
	for (int i = 0; i < sz; i++) {
		if (a[i] > b[i]) c[i] = a[i];
		else c[i] = b[i];
	
	}
	return c; //c[0];
}