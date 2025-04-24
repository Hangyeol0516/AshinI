#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector> 
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	std::vector<int> vec;
	
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		int num;
		scanf("%d", &num);

		vec.push_back(num);
	}

	std::sort(vec.begin(), vec.end());

	int M;
	scanf("%d", &M);

	for (int i = 0; i < M; i++)
	{
		int num;
		scanf("%d", &num);

		if (std::binary_search(vec.begin(), vec.end(), num)) // 정렬된 vec 배열 안에 num의 값이 있으면 1을 반환 아니면 0을 반환
		{
			printf("1\n");
		}
		else
		{
			printf("0\n");
		}
	}
}