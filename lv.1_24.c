#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {
	char str[11] = { 0 };
	gets_s(str);

	char k = str[0];

	for (int i = 0; i < 10; i++) {
		if (k > str[i]) {
			k = str[i];
		}
	}

	printf("%s, 가장 빠른 알파벳은 %c", str, k);
}
