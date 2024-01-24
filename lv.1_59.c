#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>


struct dott{
	int x;
	int y;
};

int main() {
	struct dott p1, p2;

	int xx;
	int yy;

	scanf("%d %d", &p1.x, &p1.y);

	scanf("%d %d", &p2.x, &p2.y);

	xx = p1.x - p2.x;
	yy = p1.y - p2.y;

	float ans = sqrt(xx * xx + yy * yy);

	printf("%.2f", ans);
}
