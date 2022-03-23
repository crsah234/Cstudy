#include <stdio.h>
# define PI 3.14
#define max(r) (2*PI*r) // 인자를 사용한 매크로 함수 1
#define max2(r) (max(r)*2) // max(r) 을 이용한 매크로함수
int main() {
// 전처리기
	// # include - 전처리 지시자 / # define PI 3.14  -  매크로 상수나, 
	// 인자를 사용한 매크로
	// max(r) 과 같음,

	// 매크로는 이미 정의된 매크로를 다시 사용 가능하다.
	// max2(r)
	// 
//출력 함수 printf()


	//형식제어문자(foramt control character)
	// %c, %d, %lf, %f 


	// 정수 출력 -> %d, %i.

	printf("%6d \n", 10);
	printf("%6i \n", 10);

	   // 정수중 부호없는 십진수 출력 -> %u

	// 8진수('O'cto) 출력, 16진수(He'x'a) 출력 - %o, %x
	printf("8진수(10) : %o \n", 10);
	printf("16진수(10) : %x \n",10);

	   // 16진수 0x붙여서 출력하기
	puts("16진수 0x붙여서 출력하는방법 : %0#x를 쓴다! : ");
	printf("%0#x\n", 10);

	// 실수 출력 : %f - float, %lf - double -> scanf_s에서는 상관이 없으나 ,scanf에서는 구별해야함,
	printf("실수출력(float %%f) : %f \n", 10.0);
	printf("실수출력(double %%lf) %lf \n", 10.0);

	//출력 폭의 지정 : %[부호][전체폭].[소수점이하폭]{d|i|f}
	// 부호 : +일시 +부호 출력, - 일시 좌측 정렬
	printf("전체폭6, 소수점이하 폭 2, 좌측 정렬 : %-6.2f \n", 10.12345); // 10.12_



//  입력함수 scanf_s : scanf("%d", &a);
	//변수 : 입력값을 저장시 변수명 앞에 반드시 address를 의미하는 &를 삽입해야함
	// 가급적 다른 기호는 쓰지말것 : scanf_s("%d %f") 처럼. 형식지정자와 공백만 있게끔 지향.
	//scanf() : #define_CRT_SECURE_NO_WARNINGS  - 쓸꺼면 define하기.

	// 정수 입력받기 %d, %i && 빈자리 0으로 채우기

	  // %i는 default값이 10진법이고, 입력받는 값이 0이면 8진수, 0x면 16진수로  인식하여 저장.

	int ac;
	puts("4자리 정수 입력 : ");
	scanf_s("%d", &ac); // 1234
	printf("4자리 정수 입력 : %0+10d\n", ac); // +000001234;
	
	//입력함수 제어문자 %lf, %f, % - 각각 double, float, char형식 입력받기

	//double 형 입력받기 - 형식지정자(%lf)
	double a;
	puts("실수 입력(double형)");
	scanf_s("%lf", &a);
	printf("%lf\n", a);

	// float 형 입력받기 - 형식지정자(%f)
	float b;
	puts("실수입력(float)");
	scanf_s("%f", &b);
	printf("%f\n", b);

	// char형 입력받기 - 형식지정자(%c), 그리고 변수크기를 나타내는 인자가 필요함. scanf_s("%c",&c,1); ****
	char c;
	puts("문자 1개입력, 근데 이전줄에서 입력하면서 생기는 enter버퍼가 들어가서 제대로 입력은 안됨.");
	puts("제대로 입력하려면 입력버퍼를 다지우거나, 문자를 입력받는 형식지정자 %c앞에 공백문자를 넣어"" %c 로 입력하면");
	puts("아직 입력 버퍼에 남아있는 [enter]키가 %c앞 공백문자로인식되어 무시되고, 이어서입력되는 문자가 들어가짐.");
	scanf_s("%c", &c,1);
	printf("%c\n", c);

	// 윗줄은 잘 입력이 안받아질것임
	//  함수 scanf_s()는 임시저장소 버퍼(buffer)를 사용하는데, 
	// [enter]키가 원하지 않는 문자변수에 저장되어 원래 의도한 문자는 입력에 성공 못하는 일이 발생한 것임
	// 
	// ** %c는 엔터도 받기에 자바의 nextLine()처럼 이전의 입력을 받은것의 엔터를 없애주어야함.
	//  버퍼에 남아있는 엔터를 제거해줘야한다는 말임.
	// 이전줄에서 값을 입력받을때 생기는 엔터를없애는 방법
	// 1. 버퍼에 남아있는[enter]키를 함수 fflush(stdin)을 호출하여 없애버리기
	fflush(stdin); // 입력 버퍼를 다지움
	puts("입력버퍼 모두 제거 후 다시 입력받기(%c)");
	scanf_s("%c", &c, 1);
	printf("입력받은 문자: %c\n", c);

	// 2. %c 형식지정자 앞을 공백으로 비워두기. 그러면 [enter]키가 앞에 공백문자로 인식되어 무시됨.
	puts("다시한번 실수입력 : ");
	scanf_s("%f", &b);
	printf("%f\n", b);

	puts("이제 다시 문자 하나 입력: ");
	scanf_s(" %c", &c, 1);
	printf("입력받은 문자 : %c\n", c);

// 문자열 입력받기
	char d[10];
	puts("문자열 입력받기 : ");
		scanf_s("%s", &d[0],10);
		printf("%s", &d);




// getchar(), putchar() - 문자의 입출력 함수.
		puts("getchar 입력받기 : ");
		char ga = getchar();
		putchar(ga);
	return 0;

}