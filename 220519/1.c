//1 ���̸�, ����, ���������� ����� ������ ����ü�� �����ϰ�, 
//�ڽ��� ������ �Է� �޾� ������ ����, ����ü �����͸� �̿��Ͽ� �ٽ� ����Ͻÿ�. 

#include <stdio.h>
#include <string.h>
struct m
{
	char name[10];
	int age;
	char blood;
};
void main(){
	char c;
	puts("������ �Է� : ");
	scanf_s("%c", &c, 1);

	typedef struct m m;
	char a[10];
	printf("�̸� �Է�:");
	scanf_s("%s", a, 10);

	int b;
	puts("���� �Է�:");
	scanf_s("%d", &b);
	
	m os;
	os.age = b;
	os.blood = c;
	strcpy_s(os.name, 10, a);
	m* p = &os;
	printf("%s %d %c", (*p).name, (*p).age, (*p).blood);
	// scanf_s("%s %d %c",os.name,20,&os.age,os.blood,1);
	printf("%s %d %c", p->name, p->age, p->blood);
	

}
