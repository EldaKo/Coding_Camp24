#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int sum = 0;

	for (int i = 1; i < 101; i++) {
		sum = sum + i;
	}
	printf("%d", sum);
}
