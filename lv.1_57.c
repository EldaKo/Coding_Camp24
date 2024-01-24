#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void gugudan(int k);

int main() {
	
	printf("원하는 단을 입력>");
	int a;
	scanf("%d", &a);

	gugudan(a);


}

void gugudan(int k) {
	for (int i = 1; i < 10; i++) {
		printf("%d*%d = %2d\n", k, i, k * i);
	}
}
