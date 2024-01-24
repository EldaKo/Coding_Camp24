#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int main() {

	int a, b;
	scanf("%d %d", &a, &b);

	while (b != 0) {

		int r = a % b;
		a = b;
		b = r;
	}

	printf("최대공약수는 %d", a);


}
