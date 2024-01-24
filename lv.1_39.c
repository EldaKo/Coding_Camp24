#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int num[10];

	int a[10] = { 0,0,3,0,5,0,0,8,9,10 };
	int b[10] = { 0 };


	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (num[i] == a[j]) {
				b[j]++;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		if (a[i] != 0) {
			printf("%d : %d\n", a[i], b[i]);
		}
	}



}
