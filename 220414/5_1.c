//5 �Լ�(���� ��� foo() �Լ�) �ڽ��� �� �� ȣ��Ǿ����� �������ִ� 
//�Լ��� ����� ���� �� ȣ���Ͽ� �����غ��ÿ�.
#include <stdio.h>
int foo();

int main() {
	printf("%d\n", foo());
	printf("%d\n", foo());
}


int foo() {
	static int count;
	
	count+=1;
	return count;
}