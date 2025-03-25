#define _CRT_SECURE_NO_WARNINGS // C4996 오류 방지
#include <stdio.h>

int main() {

	char str[1000];
	scanf("%s", &str);

	int i;
	scanf("%d", &i);

	printf("%c", str[i-1]);

    return 0;
}