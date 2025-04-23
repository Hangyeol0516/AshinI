#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector> 
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	int N;
	scanf("%d", &N);

	std::vector<int> vector;

	for (int i = 0; i < N; i++)
	{
		int num;
		scanf("%d", &num);
		vector.push_back(num);
	}

	std::sort(vector.rbegin(), vector.rend());

	for (auto itr = vector.begin(); itr != vector.end(); ++itr)
	{
		printf("%d\n", *itr);
	}

	return 0;
}