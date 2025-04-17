#include <cstring>
#include <iostream>
#include <stack>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	int N;
	scanf("%d", &N);

	std::stack<int> stack;

	while (N--) {

		std::string action;
		std::cin >> action;

		if (action == "push")
		{
			int X;
			scanf("%d", &X);
		
			stack.push(X);
		}
		else if (action == "pop")
		{
			if (stack.empty()) 
			{
				printf("%d\n", -1);
			}
			else
			{
				printf("%d\n", stack.top());
				stack.pop();
			}
		}
		else if (action == "size")
		{
			printf("%d\n", stack.size());
		}
		else if (action == "empty")
		{
			if (stack.empty())
			{
				printf("%d\n", 1);
			}
			else
			{
				printf("%d\n", 0);
			}
		}
		else if (action == "top")
		{
			if (stack.empty())
			{
				printf("%d\n", -1);
			}
			else
			{
				printf("%d\n", stack.top());
			}
		}

	}

	return 0;
}