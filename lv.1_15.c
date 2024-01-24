#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverse(char str3[], char str4[]);

int main() {

    char str1[100];
    char str2[200];
    char str3[100];
    char str4[400] = { 0 };
    char temp[100];

    int len1, len2, len3, len4;

    printf("입력 str1 : ");
    gets_s(str1);

    printf("입력 str2 : ");
    gets_s(str2);

    strcpy(str3, str1);
    strcpy(str1, str2);
    strcpy(str2, str3);

    printf("\n교환 str1 : %s str2 : %s", str1, str2);

    strcat(str3, str1);
    strcat(str3, " computer engineering");

    printf("\n이어 붙이기 str3 : %s\n", str3);

    reverse(str3, str4);

    printf("결론 : %s", str4);

}

void reverse(char st[], char st4[]) {
    int k = strlen(st);

    for (int i = 0; i < k; i++) {
        st4[i] = st[k - i - 1];
    }
}
