#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>


int main() {
	int k[30] = { 0 };
	int count[30] = { 0 };
	int bigger = 0;
	int biggerFr = 0;

	int n;
	printf("입력할 갯수 : ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &k[i]);
	}

	for (int i = 0; i < n; i++) {
		count[k[i]]++;
	}

	bigger = count[0];

	for (int i = 0; i < n; i++) {
		if (bigger < count[i]) {
			bigger = count[i];
			biggerFr = i;
		}
	}

	printf("최다입력: %d 입력횟수 : %d", biggerFr, bigger);
	
}
