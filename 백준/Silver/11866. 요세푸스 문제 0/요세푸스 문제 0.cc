#include <cstring>
#include <iostream>
#include <queue>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	int N, K;
	scanf("%d %d", &N, &K);

	std::queue<int> queue;

	for (int i = 1; i <= N; i++)
	{
		queue.push(i);
	}

	printf("<");

	while (1) {

		if (queue.empty())
		{
			break;
		}

		for (int i = 0; i < K - 1; i++)
		{
			queue.push(queue.front());
			queue.pop();
		}

		if (queue.size() == 1)
		{
			printf("%d", queue.front());
			queue.pop();
		}
		else
		{
			printf("%d, ", queue.front());
			queue.pop();
		}

	}

	printf(">");

	return 0;
}