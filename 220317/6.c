//6 지하철 이용거리를 입력 받아 요금을 계산하시오.
//(10Km 이내 : 1250원, 10~50Km : 5Km마다 100원 추가, 50Km 초과시 : 8Km마다 100원 추가; (예)11Km면 1250 + 100 = 1350원, 15Km면 1250 + 100 = 1350원)
// 범위가 x< y<=z 이런느낌
#include <stdio.h>
int main() {
	int a; // 거리
	printf("지하철 이용거리를 입력하시오: ");
	scanf_s("%d", &a);
	int money = 1250;; // 기본요금
	int plus_money=100; //추가요금
	if (a <= 10) plus_money = 0;
	else if (10 < a && a <= 50) {

		if (a % 5 != 0) {
			plus_money *= ((a-10) / 5) + 1;
		}
		else if (a % 5 == 0) {
			plus_money *= ((a - 10) / 5);
		}
	}
	else if (a > 50) {
		money += 800; // 50킬로까지의 기본요금+추가요금
		if (a % 8 != 0) {
			plus_money *= ((a-50) / 8) + 1;
		}
		else if (a % 8 == 0) {
			plus_money *= ((a - 50) / 8);
		}
	}
	printf("지하철 이용거리 : %d   총 요금 : %d", a, money + plus_money);
	return 0;
}