#include <cstring>
#include <iostream>
#include <set>
#include <unordered_map>
#include <vector> 
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	int N;
	scanf("%d", &N);

	std::unordered_map<int, int> umap;

	for (int i = 0; i < N; i++)
	{
		int num;
		scanf("%d", &num);
		
		umap[num] += 1;
	}

	int M;
	scanf("%d", &M);

	std::vector<int> vec(N);

	for (int i = 0; i < M; i++)
	{
		int num;
		scanf("%d", &num);

		if (umap.find(num) != umap.end()) {
			printf("%d ", umap[num]);
		}
		else {
			printf("%d ", 0);
		}
	}

	return 0;
}