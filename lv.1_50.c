#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
void star(int n);

int main() {

	star(1);  printf("\n");
	star(2);  printf("\n");
	star(3);  printf("\n");
}

void star(int n) {
	for (int i = 0; i < n; i++) {
		printf("*");
	}

}
