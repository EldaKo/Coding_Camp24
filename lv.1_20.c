#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int num(char str[]);

int main() {
	char str[100];
	gets_s(str);

	int k = num(str);
	printf("%d", k);
   
}

int num(char str[]) {
	int k = strlen(str);
	return k;
}
