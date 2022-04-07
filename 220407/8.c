//8. 20억 이상의 소수(prime number) 10개 찾기.(소수인지 알려주는 함수를 구현할 것 예 : int is_prime(int))
#include <stdio.h>
int is_prime(int a);
int main() {
    int count = 0;
       long a = 2000000000;
       for (long i = a; ; i++) {
          if (is_prime(i) == 1) {
              printf("%ld\n", i);   
              count++;
              if (count == 10) break;
          }
       }
       
}
int is_prime(int a) {
    int half = a / 2;
    //  컴파일러에 따라 반복할때마다 계산할 수 있음. 시간 더걸림.
    for (long i = 2; i < half; i++) {
        if (a % i == 0) {
            return 0;
         }
    }
    return 1;
}