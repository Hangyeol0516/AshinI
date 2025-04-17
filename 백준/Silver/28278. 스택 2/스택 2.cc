#include <cstring>
#include <iostream>
#include <stack>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	int N;
	scanf("%d", &N);

	std::stack<int> stack;

	while (N--) {

		int action;
		scanf("%d", &action);

		if (action == 1)
		{
			int X;
			scanf("%d", &X);
		
			stack.push(X);
		}
		else if (action == 2)
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
		else if (action == 3)
		{
			printf("%d\n", stack.size());
		}
		else if (action == 4)
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
		else if (action == 5)
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