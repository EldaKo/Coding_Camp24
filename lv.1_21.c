#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {
	int score = 0;
	scanf("%d", &score);

	switch (score) {
	case 1:
		printf("1등 : 프린터, 컴퓨터, 상금, 상패");
		break;

	case 2:
		printf("2등 : 컴퓨터, 상금, 상패");
		break;

	case 3:
		printf("3등 : 상금, 상패");
		break;

	case 4:
		printf("4등 : 상패");
		break;

	default:
		printf("없삼");
		break;
	}

}
