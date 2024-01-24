#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	if (a > b) {
		printf("%d", a + b);
	}
	else
		printf("%d", a * b);

}
