#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {

	int sum = 0;
	int k = 0;
	for (int i = 1; i < 11; i++) {
		sum = sum + i;

		k += sum;
	}
	printf("%d", k);
}
