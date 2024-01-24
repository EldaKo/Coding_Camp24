#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	int a[100];
	int b[9];
	int c[9] = { 0 };

	for (int i = 0; i < 9; i++) {
		b[i] = i + 1;
	}

	for (int i = 0; i < 100; i++) {
		a[i] = rand() % 8 + 1;
	}

	for (int i = 1; i < 101; i++) {
		printf("%d ", a[i-1]);
		if (i % 10 == 0) {
			printf("\n");
		}
	}

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 9; j++) {
			if (a[i] == b[j]) {
				c[j]++;
			}
		}
	}

	for (int i = 0; i < 9; i++) {
		printf("%d : %d개 ", b[i], c[i]);
	}
}
