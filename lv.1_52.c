#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int mid(int x, int y, int z);

int main() {
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);

	int f = mid(x, y, z);

	printf("%d", f);

}

int mid(int x, int y, int z) {
	int final = (x + y + z) / 3;
	return final;
}
