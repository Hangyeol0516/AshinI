#define _CRT_SECURE_NO_WARNINGS // C4996 오류 방지
#include <stdio.h>

int main() {

	char str[100];
	scanf("%s", &str);

	int c = 0;

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
		{
			c++;
		}
	}

	printf("%d", c);

    return 0;
}