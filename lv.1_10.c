#include <stdio.h>

int main() {
	char a;
	scanf_s("%c", &a);
	if (a < 97) {
		a = a + 32;
	}

	else
		a -=32;

	printf("%c", a);
}
