#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char str[100];
    char alpha[26];
    int alpha1[26] = { 0 };

    gets_s(str);

    for (int i = 0; i < 26; i++) {
        alpha[i] = 65 + i;
    } // 65 = >26      65 == 0 66 == 1

    for (int i = 0; i < strlen(str); i++) {
        if (64 < str[i] && str[i]<91) {
            alpha1[str[i] - 65]++;
        }

        else if (96 < str[i] && str[i] < 123) {
            alpha1[str[i] - 97]++;
        }

    }

    for (int i = 0; i < 26; i++) {
        printf("%c : %d / ", alpha[i], alpha1[i]);
    }


}
