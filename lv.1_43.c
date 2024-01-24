#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int main() {
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			if ((i * 10 + j) + (i + j * 10) == 154) {
				printf("%d%d + %d%d = 154\n", i, j, j, i);
			}
		}
	}
	
}
