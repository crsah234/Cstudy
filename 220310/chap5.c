#include <stdio.h>

int main() {
	//단축평가
	// 논리연산자&&와 ||는 왼쪽 피연산자만으로 논리값이 결정되면 오른쪽 피연산자는 평가하지 않는다.
	
	//이진법으로 나타내기.
	int x = 7; // 0111
	int result;
	for (int i = 3; i>=0; i--) {
		result = x >>i&1;
		
			printf("%0d", result);
	}





// 연산자 sizeof() -> 
// 저장장소(연산값 또는 자료형) 의 크기를 구하는 연산자.
//  결과값은 바이트 단위의 정수이다. 

	// 자료형인 경우 반드시 괄호 O. - 자료형이나 변수나등등 그냥 괄호치자
	printf("sizeof(%%d) : %d\n",sizeof(int));
	// 피연산자, 상수, 변수, 연산식 - 괄호 X
	printf("sizeof(%%d) : %d\n",sizeof(x));



// 콤마연산자 - 
	// 솔직히 이게 왜 있는지 모르겠음
	// var = exp1, exp2
	// var= exp2, 즉 가장 후미에 있는 것이 결과가 됨.
	//ex)
	int cx = (3 + 4, 2 * 3); // 6
	printf("%d", cx);

	int ca, cb, cc;
	ca = 100; 
	cb = 50; 
	cc = 1;
	int ck = ca++; cb++;
	printf("ck : %d", ck);







	return 0;
}