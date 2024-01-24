#include <stdio.h>

int main() {
	int num;
	int i = 1;
	scanf_s("%d", &num);

	while (1) {
		num = num / 10;

		if (num < 1) {
			printf("%d", i);
			break;
		}

		i++;
	}
}	

