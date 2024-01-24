#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int round(double f);

int main() {
	int c = round(6.999);
	printf("%d", c);

}
int round(double f) {
	double k = f + 0.5;

	int a = k;

	return a;
}
