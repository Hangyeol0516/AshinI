#include <iostream>
#include <cstring>
#include <array>
#pragma warning(disable:4996)

int main() {

	int C, K, P;
	scanf("%d %d %d", &C, &K, &P);

	int result = 0;

	for (int i = 1; i <= C; i++)
	{
		result += (K * i) + (P * i * i);
	}

	printf("%d", result);
	
	return 0;
}