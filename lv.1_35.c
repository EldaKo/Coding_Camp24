#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {

	int i;

	for (i = 1; i < 101; i++) {
		if (i % 2 == 0) {
			printf("%d ", i);
		}
		else
			continue;
	}




}
