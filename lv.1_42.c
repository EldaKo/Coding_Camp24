#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int first;
	scanf("%d", &first);

	while (first > 1) {
		printf("%d", first % 10);
		first = first / 10;
	}
	
}
