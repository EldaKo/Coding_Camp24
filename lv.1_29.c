#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {
	int x1, x2, x3, y1, y2, y3;

	scanf("%d %d", &x1, &y1);
	scanf("%d %d", &x2, &y2);
	scanf("%d %d", &x3, &y3);

	if (x1 == x2 && x2 == x3 || y1 == y2 && y2 == y3) {
		printf("삼각형을 만들 수 없습니다.");
	}

	else
		printf("삼각형을 만들 수 있습니다.");

}
