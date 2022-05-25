#include <stdio.h>
//2 학생의 “이름, 과목명1, 평점, 과목명2, 평점, 과목명3, 평점” 등 7개의 멤버를 가지는 구조체를 정의하고, 
//이 구조체의 포인터를 인자로 하여 평점평균을 구해주는 함수를 작성하고, 호출해 보시오.
typedef struct student{
	char name[10];
	char sub1[10];
	int sub1_score;
	char sub2[10];
	int sub2_score;
	char sub3[10];
	int sub3_score;
}st;
double getAverage(st* p);
void main() {
	st os;
	puts("과목3개의 평점 입력:");
	scanf_s("%d %d %d", &os.sub1_score, &os.sub2_score, &os.sub3_score);
	printf("%lf",getAverage(&os));
	}
double getAverage(st* p) {
	int sum = 0;
	sum = (p->sub1_score) + (p->sub2_score) + (p->sub3_score);
	return (sum / 3);
};