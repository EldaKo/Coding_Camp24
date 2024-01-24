#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void aa(char a[]);

int main() {
	char op;
	int a, b = 0;

	scanf("%c %d %d", &op, &a, &b);

	switch (op) {
	case '*':
		printf("%d * %d = %d", a, b, a * b);
		break;
		
	case '/':
		printf("%d / %d = %d", a, b, a / b);
		break;

	case '+':
		printf("%d + %d = %d", a, b, a + b);
		break;

	case '-':
		printf("%d - %d = %d", a, b, a - b);
		break;
		
	default:
		printf("계산 불가");
	}
}
