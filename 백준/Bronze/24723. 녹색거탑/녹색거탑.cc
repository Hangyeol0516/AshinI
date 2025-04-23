#include <cstring>
#include <iostream>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	int N;
	scanf("%d", &N);

	int result = 1;

	for (int i = 0; i < N; i++)
	{
		result *= 2;
	}

	printf("%d", result);

	return 0;
}