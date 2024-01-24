#include <stdio.h>

int main() {
	int hour, min, sec;

	printf("시, 분, 초를 입력하시오 : ");
	scanf_s("%d %d %d", &hour, &min, &sec);

	hour = hour * 3600;
	min = min * 60;
	int result = hour + min + sec;
	printf("%d초", result);
}
