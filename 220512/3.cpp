//3 ���ڿ��� ���ڷ� �޾� ���������� �̷���� ���ڿ��� ����, 
//������ ���ڷ� ������ �ִ� �Լ��� �����, ȣ���� ���ÿ�.(��, ������ a, e, i, o, u ��)  
//(void strConsonant(char*, char*))
#include <stdio.h>
void strConsonant(char* a, char* b);
int main() {
	char num1[100];
	char num2[100];
	puts("���ڿ� �Է�:");
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
	// ���ڿ� ����ϴ°� ������
}