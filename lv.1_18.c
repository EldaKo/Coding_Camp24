#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int num(int a);

int main() {
	int a = 0;
	scanf("%d", &a);
	int b = num(a);
	printf("%d", b);
   
}

int num(int a) {
	int k = 0;
	for (int i = 0; i < a + 1; i++) {
		k += i;
	}

	return k;
}
