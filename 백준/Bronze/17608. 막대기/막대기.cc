#include <algorithm>
#include <cstring>
#include <iostream>
#include <stack>
#include <vector> 
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {
	
	int N;
	scanf("%d", &N);

	std::vector<int> vec;
	vec.reserve(N);

	for (int i = 0; i < N; i++)
	{
		int num;
		scanf("%d", &num);
		vec.push_back(num);
	}

	std::stack<int> stack;

	stack.push(0);

	int c = 0;
	int max = 0;
	
	for (auto itr = vec.rbegin(); itr != vec.rend(); ++itr) {
		

		if (*itr > stack.top() && *itr > max)
		{
			c++;
			stack.push(*itr);
		}
		else
		{
			stack.push(*itr);
		}

		if (*itr > max)
		{
			max = *itr;
		}
	}

	printf("%d", c);

	return 0;
}
