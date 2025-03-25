#define _CRT_SECURE_NO_WARNINGS // C4996 오류 방지
#include <stdio.h>

int main() {

	char str[100];
	scanf("%s", &str);

	int c = 0;

	for (int i = 0; i < strlen(str); i++)
	{
		if (c == 10)
		{
			c = 0;
			printf("\n");
		}
		printf("%c", str[i]);
		c++;
	}

    return 0;
}