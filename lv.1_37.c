#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int i, n1, n2;
	char op;

	while (1) {

		printf("수식 입력 : ");
		scanf("%d%c%d", &n1, &op, &n2);

		switch (op) {
		case'+':
			printf("%d %c %d = %d", n1, op, n2, n1 + n2);
			break;
		case'-':
			printf("%d %c %d = %d", n1, op, n2, n1 - n2);
			break;
		case'/':
			printf("%d %c %d = %d", n1, op, n2, n1 / n2);
			break;
		case'*':
			printf("%d %c %d = %d", n1, op, n2, n1 * n2);
			break;
		default:
			printf("입력이 잘못되었습니다.");
			break;
		}

		printf("\n");
	}

}
