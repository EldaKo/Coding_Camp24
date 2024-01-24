#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {

	int sum = 100;
	int k = 0;

	while (sum != 0) { // while(--라면 실행)
		int k = 0;
		printf("뺄 값 입력 : ");
		scanf("%d", &k);

		sum = sum - k;

		printf("\nsum = %d", sum);
		
	}
