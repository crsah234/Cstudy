#include <stdio.h>
//4. ÀÔ·ÂµÈ ¼öÀÇ 10½Â, 20½Â, 30½Â, 40½Â, 50½ÂÀ» Ãâ·ÂÇÏ½Ã¿À(¶óÀÌºê·¯¸® ÇÔ¼ö pow() »ç¿ë)
#include <math.h>
int main() {
	int n;
	scanf_s("%d", &n);

	printf("10½Â : %lf 20½Â : %lf 30½Â : %lf 40½Â : %lf 50½Â : %lf", pow(n, 10), pow(n, 20), pow(n, 30), pow(n, 40), pow(n, 50));

}