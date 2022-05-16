//3 문자열을 인자로 받아 자음만으로 이루어진 문자열을 구해, 
//포인터 인자로 전달해 주는 함수를 만들고, 호출해 보시오.(단, 모음은 a, e, i, o, u 임)  
//(void strConsonant(char*, char*))
#include <stdio.h>
void strConsonant(char* a, char* b);
int main() {
	char num1[100];
	char num2[100];
	puts("문자열 입력:");
	gets_s(num1);
	strConsonant(num1,num2);
}
void strConsonant(char* a, char* b) {
	int i = 0;
	int j = 0;
	while (a[i]) {
		if (!(a[i] == 'a' || a[i] == 'i' || a[i] == 'u' || a[i] == 'e' || a[i] == 'o')) {
			b[j] = a[i];
			printf("%c", b[j]);
			j++;			
		}			  
		i++;
	}
	// 문자열 출력하는것 만들어보기
}