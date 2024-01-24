#include <stdio.h>
#include <string.h>
#include <ctype>

int main() {
	printf("비밀번호를 등록합니다.\n");
	char pass[50];
	char passagain[50];

	int isConAl = false;
	int isConDi = false;

	while (1) {
		printf("비밀번호는 영문, 숫자 포함 최소한 8자리여야합니다.\n");
		printf("새로운 비밀번호를 입력하세요 : ");
		gets_s(pass);

		if (strlen(pass) < 8) {
			continue; //걍 처음으로 돌아가는거
		}

		else {
			for (int i = 0; i < strlen(pass); i++) {
				if (isalpha(pass[i]) != 0) {
					isConAl = true;
				}

				if (isdigit(pass[i]) != 0) {
					isConDi = true;
				}

			}
			if (isConAl == false || isConDi == false) {
				printf("영문, 숫자 둘다 포함해야합니다.\n");
				continue;
			}

			else {
				printf("비밀번호 한번더 입력 : ");
				gets_s(passagain);
				if (strcmp(pass, passagain) != 0) {
					printf("비밀번호를 정확히 입력하세요.\n");
					continue;
				}
				else {
					printf("비밀번호가 등록되었습니다.");
					break;
				}
			}

		}

	}

}
