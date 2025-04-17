#include <cstring>
#include <iostream>
#include <queue>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	int N;
	scanf("%d", &N);

	std::queue<int> queue;

	while (N--) {

		char action[1000] = { 0 };
		scanf("%s", action);

		if (action[0] == 'p' && action[1] == 'u')
		{
			int X;
			scanf("%d", &X);

			queue.push(X);
		}
		else if (action[0] == 'p')
		{
			if (queue.empty())
			{
				printf("%d\n", -1);
			}
			else
			{
				printf("%d\n", queue.front());
				queue.pop();
			}
		}
		else if (action[0] == 's')
		{
			printf("%d\n", queue.size());
		}
		else if (action[0] == 'e')
		{
			if (queue.empty())
			{
				printf("%d\n", 1);
			}
			else
			{
				printf("%d\n", 0);
			}
		}
		else if (action[0] == 'f')
		{
			if (queue.empty())
			{
				printf("%d\n", -1);
			}
			else
			{
				printf("%d\n", queue.front());
			}
		}
		else if (action[0] == 'b')
		{
			if (queue.empty())
			{
				printf("%d\n", -1);
			}
			else
			{
				printf("%d\n", queue.back());
			}
		}

	}

	return 0;
}