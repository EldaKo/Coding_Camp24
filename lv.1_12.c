#include <stdio.h>
#include <stdlib.h>
#include < string.h>

int main() {
	char id[10] = "hansung";
	char password[10] = "Computer";

	char idid[10] = { 0 };
	char pass[10] = { 0 };

	printf("id : ");
	gets_s(idid);

	printf("password : ");
	gets_s(pass);

	if (strcmp(id, idid) == 0 && strcmp(password, pass) == 0) {
		printf("hansung님 환영합니다.");
	}

	else if (strcmp(id, idid) != 0) {
		printf("등록되지 않은 id입니다.");
	}


	else
		printf("비밀번호가 틀렸습니다.");

}
