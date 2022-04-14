// 4 문자열 인자에서 자음(consonant)만 골라, -? 모음이아닌것만 고르기 a e u i o
// 자음으로만 된 문자열을 리턴해주는 함수를 만들고 호출해 보시오.
#include <stdio.h>
char* return_consonant(char *a);
int main() {
	char a[100];
	scanf_s("%s", a, 100); // 0 이들어가면 문자열이 끝났다는것을알 수 있음
	
	//for (int i = 0; i < 100; i++) {
	//	printf("%c", a[i]);
//	}

	char* p;
	p = return_consonant(a);
	while (*p) {
		printf("%c ", *p++);
	}
						  

}//문자열은 항상 마무리가 표시되어있기에, NULL이들어있기에, size를 안넘겨도됨.
char* return_consonant(char *a) {
	int i = 0;
	static char com[100];
	while (*a) { // 문자열의 값이 NULL 아닐때까지.
		//(*a != 'a') && (*a != 'i') && (*a != 'e') && (*a != 'u') && (*a == 'o')
		if (!(*a=='a'||*a=='i'||*a=='e'||*a=='u'||*a=='o')) {
			// !(모음이면) == 자음일경우
			// && 연산자면 왼쪽이 참일시 오른쪽을 안봄 주의하기 ******
			com[i] = *a;
			i++; //i는 자음일떄만 증가시키기.
		}
		a++; // a는 한번돌때마다 증가시켜야함
	}

	return com;
	
}
