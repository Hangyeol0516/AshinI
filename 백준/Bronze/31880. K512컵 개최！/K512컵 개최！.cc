#include <iostream>
#include <cstring>
#include <array>
#include <algorithm>
#pragma warning(disable:4996)

int main() {

	int N, M;
	scanf("%d %d", &N, &M);

	long long result = 0;

	for (int i = 0; i < N; i++)
	{
		int num;
		scanf("%d", &num);
		result += num;
	}

	int mult[10];
	for (int i = 0; i < M; i++)
	{
		int num;
		scanf("%d", &num);
		mult[i] = num;
	}

	std::sort(mult, mult +M);

	for (int i = 0; i < M; i++)
	{
		if (mult[i] == 0) {
			continue;
		}

		result *= mult[i];
	}

	printf("%lld", result);

	return 0;
}