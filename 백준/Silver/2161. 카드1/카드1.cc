#include <algorithm>
#include <cstring>
#include <iostream>
#include <deque>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	int N;
	scanf("%d", &N);

	std::deque<int> deque;

	for (int i = 1; i <= N; i++)
	{
		deque.push_back(i);
	}

	while (deque.size()) {
		
		// 우선, 제일 위에 있는 카드를 바닥에 버린다. 
		printf("%d ", deque.front());
		deque.pop_front();

		// 그 다음, 제일 위에 있는 카드를 제일 아래에 있는 카드 밑으로 옮긴다.
		if (!deque.empty())
		{
			int temp = deque.front();
			deque.pop_front();
			deque.push_back(temp);
		}

	}

	return 0;
}