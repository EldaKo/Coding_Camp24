#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>



int main() {
	int a;
	int e = 10;
	int c = (1/10);

	int b[4] = { 1000,100,10,1 };

	scanf("%d", &a);

	int q = a / 1000;
	int qq = a / 100 % 10;
	int qqq = a / 10 % 10;
	int qqqq = a /1 % 10;


	printf("%d 단위 : %d\n", b[0], q);
	printf("%d 단위 : %d\n", b[1], qq);
	printf("%d 단위 : %d\n", b[2], qqq);
	printf("%d 단위 : %d\n", b[3], qqqq);
	

}
