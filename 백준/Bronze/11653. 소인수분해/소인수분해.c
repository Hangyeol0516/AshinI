#define _CRT_SECURE_NO_WARNINGS // C4996 오류 방지
#include <stdio.h>

int main() {

	int N = 0;
	scanf("%d", &N);

	for (int i = 2; i <= N; i++)
	{
		while (N % i == 0) {
			N = N / i;
			
			printf("%d ", i);
		}
	}


	return 0;
}