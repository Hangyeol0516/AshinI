#include <cstring>
#include <deque>
#include <iostream>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	int N;
	scanf("%d", &N);

	std::deque<int> deque;

	while (N--) {

		char action[10000];
		scanf("%s", &action);

		if (action[0] == 'p' && action[1] == 'u' && action[5] == 'f')
		{
			int X;
			scanf("%d", &X);

			deque.push_front(X);
		}
		else if (action[0] == 'p' && action[1] == 'u' && action[5] == 'b')
		{
			int X;
			scanf("%d", &X);

			deque.push_back(X);
		}
		else if (action[0] == 'p' && action[4] == 'f')
		{
			if (deque.empty())
			{
				printf("%d\n", -1);
			}
			else
			{
				printf("%d\n", deque.front());
				deque.pop_front();
			}
		}
		else if (action[0] == 'p' && action[4] == 'b')
		{
			if (deque.empty())
			{
				printf("%d\n", -1);
			}
			else
			{
				printf("%d\n", deque.back());
				deque.pop_back();
			}
		}
		else if (action[0] == 's')
		{
			printf("%d\n", deque.size());
		}
		else if (action[0] == 'e')
		{
			printf("%d\n", deque.empty());
		}
		else if (action[0] == 'f')
		{
			if (deque.empty())
			{
				printf("%d\n", -1);
			}
			else
			{
				printf("%d\n",deque.front());
			}
		}
		else if (action[0] == 'b')
		{
			if (deque.empty())
			{
				printf("%d\n", -1);
			}
			else
			{
				printf("%d\n", deque.back());
			}
		}

	}

	return 0;
}