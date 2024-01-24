#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>

double wornl(double n);

int main() {
	double z = wornl(3.0);
	printf("%f", z);
}

double wornl(double n) {
	if (n == 1.0)
		return 1.0;
	else
		return (1.0 / n) + wornl(n - 1.0);
}
