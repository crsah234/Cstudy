//4 스포츠센터 회원 확충을 위한 DB를 구성하려 한다.이름, 회원여부, 회원번호(비회원은 닉네임)의 멤버를 가지는 구조체를 정의하고,
//회원 1명과 비회원 1명을 입력 받아 저장한 후 출력하시오.(단 비회원은 회원번호에 자신의 닉네임을 쓰게 공용체로 구성하시오)
#include <stdio.h>
typedef union memeberNum {
	char nickName[10];
	int memNum;
}checkMem;
typedef struct sports {
	char name[10];
	char Yes_NO;
	checkMem c;
}s;
void main() {
	s os[2];
	for(int i=0;i<2;i++){
		puts("이름을 입력하세요:");
		scanf_s("%s", os[i].name,10);
		puts("회원여부 : Y or N 입력:");
		
		scanf_s(" %c", &os[i].Yes_NO,1);
		if (os[i].Yes_NO == 'N') {
			puts("비회원입니다. 회원번호는 닉네임을 입력하셔야합니다.");
			scanf_s("%s", os[i].c.nickName,10);
		}
		else if (os[i].Yes_NO == 'Y') {
			puts("회원입니다. 회원번호를 입력해주세요");
			scanf_s("%d", &os[i].c.memNum);
		}

	}

	for(int i = 0; i < 2; i++){
		if (os[i].Yes_NO == 'Y')
			printf("  회원[이름 : %10s 회원번호 : %10d]\n", os[i].name, os[i].c.memNum);

		else if (os[i].Yes_NO == 'N')
			printf("비회원[이름 : %10s   닉네임 : %10s]\n", os[i].name, os[i].c.nickName);
	}
}