#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>

void str_reverse(char a[]);

int main() {
	
	char a[] = {"hello"};
	str_reverse(a);

	
	
}

void str_reverse(char a[]) {
	
	char b[30] = { 0 };

	for (int i = 0; i <= strlen(a); i++) {
		b[i] = a[strlen(a) - i];
	}

	for (int i = 0; i <= strlen(a); i++) {
		printf("%c", b[i]);
	}

	
}
