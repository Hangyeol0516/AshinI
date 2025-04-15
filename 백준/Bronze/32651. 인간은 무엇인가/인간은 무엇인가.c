#define _CRT_SECURE_NO_WARNINGS // C4996 오류 방지
#include <stdio.h>

int main() {

	int N;
	scanf("%d", &N);

	printf("%s", N % 2024 == 0 && N <= 100000 ? "Yes" : "No");

	return 0;
}