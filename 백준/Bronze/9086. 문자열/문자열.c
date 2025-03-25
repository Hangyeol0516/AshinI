#define _CRT_SECURE_NO_WARNINGS // C4996 오류 방지
#include <stdio.h>

int main() {

	int T;
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		char str[1000];
		scanf("%s", &str);

		printf("%c", str[0]);
		printf("%c\n", str[strlen(str)-1]);
	}
	
    return 0;
}