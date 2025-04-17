#include <iostream>
#include <stack> 
#include <cstdio>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	int K;
	scanf("%d", &K);

	std::stack<int> stack;

	while (K--) {

		int N;
		scanf("%d", &N);

		if (N != 0)
		{
			stack.push(N);
		}
		else {
			stack.pop();
		}
	}

	int result = 0;

	while (!stack.empty()) {
		result += stack.top();
		stack.pop();
	}

	printf("%d", result);

	return 0;
}