// 4 ���ڿ� ���ڿ��� ����(consonant)�� ���, -? �����̾ƴѰ͸� ���� a e u i o
// �������θ� �� ���ڿ��� �������ִ� �Լ��� ����� ȣ���� ���ÿ�.
#include <stdio.h>
char* return_consonant(char *a);
int main() {
	char a[100];
	scanf_s("%s", a, 100); // 0 �̵��� ���ڿ��� �����ٴ°����� �� ����
	
	//for (int i = 0; i < 100; i++) {
	//	printf("%c", a[i]);
//	}

	char* p;
	p = return_consonant(a);
	while (*p) {
		printf("%c ", *p++);
	}
						  

}//���ڿ��� �׻� �������� ǥ�õǾ��ֱ⿡, NULL�̵���ֱ⿡, size�� �ȳѰܵ���.
char* return_consonant(char *a) {
	int i = 0;
	static char com[100];
	while (*a) { // ���ڿ��� ���� NULL �ƴҶ�����.
		//(*a != 'a') && (*a != 'i') && (*a != 'e') && (*a != 'u') && (*a == 'o')
		if (!(*a=='a'||*a=='i'||*a=='e'||*a=='u'||*a=='o')) {
			// !(�����̸�) == �����ϰ��
			// && �����ڸ� ������ ���Ͻ� �������� �Ⱥ� �����ϱ� ******
			com[i] = *a;
			i++; //i�� �����ϋ��� ������Ű��.
		}
		a++; // a�� �ѹ��������� �������Ѿ���
	}

	return com;
	
}
