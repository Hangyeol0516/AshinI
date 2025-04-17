#include <cstring>
#include <deque>
#include <iostream>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	int N;
	scanf("%d", &N);

	std::deque<int> deque;

	while (N--) {

		int action;
		scanf("%d", &action);

		if (action == 1)
		{
			int X;
			scanf("%d", &X);

			deque.push_front(X);
		}
		else if (action == 2)
		{
			int X;
			scanf("%d", &X);

			deque.push_back(X);
		}
		else if (action == 3)
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
		else if (action == 4)
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
		else if (action == 5)
		{
			printf("%d\n", deque.size());
		}
		else if (action == 6)
		{
			printf("%d\n", deque.empty());
		}
		else if (action == 7)
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
		else if (action == 8)
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