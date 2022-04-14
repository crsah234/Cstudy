#include <stdio.h>
extern int num;
void prn_hello() {
	for (int i = 0; i < num; i++)
		puts("Hello");
}