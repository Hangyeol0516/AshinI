#define _CRT_SECURE_NO_WARNINGS // C4996 오류 방지
#include <stdio.h>

int main() {

	char jh[999];
	char dr[999];

	scanf("%s", &jh);
	scanf("%s", &dr);

	if (strlen(jh) >= strlen(dr))
	{
		printf("go");
	}
	else
	{
		printf("no");
	}

    return 0;
}