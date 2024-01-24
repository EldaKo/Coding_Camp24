#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>



int main() {
	int a[6] = { 0,1,2,3,4,5 };

	for (int i = 1; i < 7; i++) {
		for (int j = 0; j < i; j++) {
			printf("%d", a[j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6 - i; j++) {
			printf("%d", a[j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 6; i++) {
		for (int j = 5 - i; j > -1; j--) {
			printf("%d", a[j]);
		}
		printf("\n");
	}
}
