#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int factorial(int n);

int main() {
	int a;
	scanf("%d", &a);

	int k = factorial(a);
	printf("%d", k);

}

int factorial(int n) {
	int ans = 1;
	for (int i = 1; i <= n; i++) {
		ans = n * factorial(n - 1);
		if (n == 1)
			return 1;
	}
	return ans;
}
