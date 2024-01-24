#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

void compute_time(int* hour, int* min, int* sec);

int main() {
	int sec, hour, min = { 0 };

	printf("초단위의 시간을 입력하세요 : ");
	scanf("%d", &sec);

	compute_time(&hour, &min, &sec);

	printf("%d시 %d분 %d초", hour, min, sec);

}

void compute_time(int* hour, int* min, int* sec) {
	*hour = *sec / 60;
	*min = (*sec % 60) / 60;
	*sec = (*sec % 60) % 60;
}
