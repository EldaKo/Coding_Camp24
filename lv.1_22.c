#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void aa(char a[]);

int main() {
	char ch1[100];
	char ch2[100];
	char ch3[100];

	gets_s(ch1);
	gets_s(ch2);
	gets_s(ch3);

	aa(ch1);
	aa(ch2);
	aa(ch3);


}

void aa(char a[]) {
	int k = strlen(a);
	char re = a[0];
	for (int i = 0; i < k; i++) {
		if (re > a[i]) {
			re = a[i];
		}
	}

	printf("정답은...%c\n", re);
}
