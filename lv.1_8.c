#include <stdio.h>
int main() {
	int num;
	scanf_s("%d", &num);
	int a = num / 1000;
	int b = (num % 1000) / 100;
	int c = ((num % 1000) % 100) / 10;
	int d = ((num % 1000) % 100) % 10;
	printf("%d + %d + %d + %d = %d", a, b, c, d, a + b + c + d);
}	
