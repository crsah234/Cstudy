#include<stdio.h>
//1 문자열내의 숫자문자(즉 ‘0’~’9’)의 개수를 알려주는 함수를 만들고,
//호출해 보시오.(int cntNumber(char*))
int cntNumber(char* p);
int main() {
	char num[100];
	puts("문자열 입력:");
	scanf_s("%s", num, 100);
	char* p = num;
	int i = 0;
	while (p[i]) {
		printf("%c", p[i++]);
	}
	printf("문자열내 숫자문자 개수: %d개", cntNumber(num));


}
int cntNumber(char* p) {
	int count = 0;
	int i = 0;
	//while (p[i]) {
	//	/*p[i] == '0' || p[i] == '1' || p[i] == '2' || p[i] == '3' || p[i] == '4'
	//		|| p[i] == '5' || p[i] == '6' || p[i] == '7' || p[i] == '8' || p[i] == '9'*/
	//	if (p[i]>='0'||p[i]<='9')
	//		count++;
	//	i++;
	//}
	while (*p) {
		if (*p >= '0' && *p <= '9') count++;
		p++;
	}
	return count;
}