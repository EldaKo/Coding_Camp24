#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

double tri(double a, double b);

int main() {
	double a, b;

	scanf("%lf %lf", &a, &b);

	double k = tri(a, b);

	printf("%lf", k);



}

double tri(double a, double b) {
	double k = sqrt(a * a + b * b);

	return k;
	

}
