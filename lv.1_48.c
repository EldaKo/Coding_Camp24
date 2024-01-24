#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>



int main() {
	
	int bigger = -1;
	int a = 1;
	int b = 1;

	while (b>0 && a>0) {
		scanf("%d", &a);
		scanf("%d", &b);

		if (bigger < a && a > b) {
			bigger = a;
		}
		else if (bigger < b && b > a) {
			bigger = b;
		}

	}

	printf("제일 큰 수는 : %d", bigger);

}
