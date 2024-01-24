#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int string_value(char* a);

int main() {

	char a[30];
	gets_s(a);

	int k = string_value(a);

	printf("%d", k);
	
	
}

int string_value(char* a) {

	int b[30] = { 0 };
	int sum = 0;
	int i = 0;

	while (a[i] != '\0') {
		b[i] = a[i] - 48;
		i++;
	}
	
	for (int i = 0; i < 30; i++) {
		sum = sum + b[i];
	}

	return sum;
}
