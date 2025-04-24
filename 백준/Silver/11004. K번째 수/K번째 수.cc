#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector> 
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	int N, K;
	scanf("%d %d", &N, &K);

	std::vector<int> result;

	for (int i = 0; i < N; i++)
	{
		int num;
		scanf("%d", &num);

		result.push_back(num);
	}

	std::sort(result.begin(), result.end());

	printf("%d", result[K - 1]);

	return 0;
}