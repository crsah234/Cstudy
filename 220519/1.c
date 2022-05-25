//1 “이름, 나이, 혈액형”을 멤버로 가지는 구조체를 정의하고, 
//자신의 정보를 입력 받아 저장한 다음, 구조체 포인터를 이용하여 다시 출력하시오. 

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
	puts("혈액형 입력 : ");
	scanf_s("%c", &c, 1);

	typedef struct m m;
	char a[10];
	printf("이름 입력:");
	scanf_s("%s", a, 10);

	int b;
	puts("나이 입력:");
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
