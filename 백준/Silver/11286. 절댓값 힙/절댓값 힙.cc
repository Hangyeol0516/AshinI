#include <algorithm>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector> 
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

struct Abs {
	bool operator()(int a, int b) {
		if (std::abs(a) == std::abs(b)) return a > b;
		
		return std::abs(a) > std::abs(b);
	}
};

int main() {

	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N;
	std::cin >> N;

	std::priority_queue<int, std::vector<int>, Abs> minHeap;

	for (int i = 0; i < N; i++)
	{
		int x;
		std::cin >> x;

		if (x == 0)
		{
			if (minHeap.empty())
			{
				std::cout << "0\n";
			}
			else
			{
				std::cout << minHeap.top() << "\n";
				minHeap.pop();
			}
		}
		else
		{
			minHeap.push(x);
		}
	}

	return 0;
}