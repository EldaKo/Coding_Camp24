#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	char stop[20];

	while (strcmp(stop, "중단") !=0) {
		int a[3];
		for (int i = 0; i < 3; i++) {
			a[i] = rand() % 91;
			printf("%d ", a[i]);
		}

		if (a[0] == a[1] && a[1] == a[2]) {
			printf("축하합니다.");
		}

		gets_s(stop);

	}

}
