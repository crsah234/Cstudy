//8. 20�� �̻��� �Ҽ�(prime number) 10�� ã��.(�Ҽ����� �˷��ִ� �Լ��� ������ �� �� : int is_prime(int))
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
    //  �����Ϸ��� ���� �ݺ��Ҷ����� ����� �� ����. �ð� ���ɸ�.
    for (long i = 2; i < half; i++) {
        if (a % i == 0) {
            return 0;
         }
    }
    return 1;
}