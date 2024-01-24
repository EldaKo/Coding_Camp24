#include <stdio.h>
#include <stdlib.h>
#include < string.h>

int main() {
	char a[30] = { 0 };
	char b[30] = { 0 };

	printf("첫 번째 문자열을 입력하세요 : ");
	gets_s(a);

	printf("두 번째 문자열을 입력하세요 : ");
	gets_s(b);

	for (int i = 0; i < 30; i++) {
		if (a[i] == b[i])
			continue;

		else {
			if (a[i] > b[i])
				printf("%s가 %s보다 커요", a, b);
			else
				printf("%s가 %s보다 커요", b, a);
		}
		break;
	}

}
