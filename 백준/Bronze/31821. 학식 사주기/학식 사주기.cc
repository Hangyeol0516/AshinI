#include <iostream>
#include <cstring>
#include <array>
#pragma warning(disable:4996)

int main() {

	int N;
	scanf("%d", &N);

	int price[12];

	for (int i = 0; i < N; i++)
	{
		int A;
		scanf("%d", &A);
		price[i] = A;
	}

	int M;
	scanf("%d", &M);

	int result = 0;
	for (int i = 0; i < M; i++)
	{
		int B;
		scanf("%d", &B);
		
		result += price[B - 1];
	}

	printf("%d", result);

	return 0;
}