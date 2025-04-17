#include <cstring>
#include <iostream>
#include <queue>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	int N;
	scanf("%d", &N);

	std::queue<int> queue;

	for (int i = 0; i < N; i++)
	{
		queue.push(i + 1);
	}

	while (1) {
		if (queue.size() == 1)
		{
			printf("%d", queue.front());
			break;
		}

		// 제일 위에 있는 카드를 바닥에 버린다.
		queue.pop();

		// 제일 위에 있는 카드를 제일 아래에 있는 카드 밑으로 옮긴다.
		queue.push(queue.front());
		queue.pop();
	}

	return 0;
}