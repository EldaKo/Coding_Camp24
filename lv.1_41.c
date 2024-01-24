#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int main() {

	printf("점수 입력 : ");
	int score;
	scanf("%d", &score);
	
	printf("학점 : ");
	if (95 < score && score < 100) {
		printf("%s","A+");
	}

	else if (90 < score) {
		printf("%c", 'A');
	}

	else if (85 < score) {
		printf("%s", "B+");
	}

	else
		printf("오류입니다.");
	
}
