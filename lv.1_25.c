#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {
	
	for (int i = 1; i < 101; i++) {

		if (i < 10) {
			if (i % 3 == 0) {
				printf("짝");
			}
			else
				printf("%d", i);
		}

		else if (i % 10 == 3 || i % 10 == 6 || i % 10 == 9) {
			printf("짝");
			if (i % 3 == 0) {
				printf("짝");
			}
		}

		else if (i % 30 < 10) {
			printf("짝");
		}

		else
			printf("%d", i);

		printf(" ");
	}

	

}
