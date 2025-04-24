#include <algorithm>
#include <cstring>
#include <iostream>
#include <queue>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N;
	std::cin >> N;

	std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

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