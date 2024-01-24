#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {
	int k = 0;
	int sum = 0;
	scanf("%d", &k);

	for (int i = 0; i < k; i++) {
		if (i % 2 != 0) {
			sum = sum + i;
		}
		else
			continue;
	}
	printf("홀수의 합은 : %d", sum);

}
