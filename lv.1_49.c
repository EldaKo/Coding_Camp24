#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int numt(int n);

int main() {
	int n;
	scanf("%d", &n);

	int k = numt(n);

	printf("%d", k);

}

int numt(int n) {
	if (n == 1)
		return 1;
	n = n + numt(n - 1);
	

	return n;
}
