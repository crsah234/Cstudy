#include <stdio.h>
int main() {

	//	6 음식값을 입력 받아 손님 3명의 ‘n분의 1’ 각 지불액을 구하시오.
	// 단 2명은 1000원 단위로 같은 금액을 부과하고 나머지는 한 사람에게 추가 부과하시오.
	//	(예)10500원이면 = > (3000원, 3000원, 4500원) 으로 분배
	
	int money;
	puts("음식값을 입력하시오");
	scanf_s("%d", &money);
	int for_1000 = (money / 1000) / 3 * 1000; // 1000원 단위인 2명의 부과금액
	int for_the_other = money - for_1000 * 2;
	printf("총 음식값은 :%d원이며, 2명은 %d원을, 나머지 한 사람은 %d원이 추가 부과된 %d원입니다.", money, for_1000, money - 3 * for_1000, for_the_other);


	


	return 0;
}