#include <stdio.h>

int main() {
	int apple, box;
	printf("사과수 입력 : ");
	scanf_s("%d", &apple);
	if (apple % 20 == 0) {
		box = apple / 20;
	}
	else
		box = (apple / 20) + 1;

	printf("상자수 = %d", box);
}
