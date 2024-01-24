#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {
	int k = 0;
	scanf("%d", &k);
	
		if (k == 2 || k == 3 || k == 5 || k == 7) {
			printf("%d는 소수", k);
		}

		

		else if (k % 2 != 0 && k % 3 != 0 && k % 5 != 0 && k % 7 != 0) {
			printf("%d는 소수", k);
		}

		else
			printf("%d는 소수가 아님", k);
	



}
