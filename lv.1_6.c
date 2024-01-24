#include <stdio.h>

int main() {
	int sec1;

	scanf_s("%d", &sec1);

	int hour = sec1 / 3600;
	int min = (sec1 % 3600) / 60;
	int sec = (sec1 % 3600) % 60;

	printf("%d시 %d분 %d초", hour, min, sec);

}
