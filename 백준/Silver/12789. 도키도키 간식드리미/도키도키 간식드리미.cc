#include <cstring>
#include <iostream>
#include <stack>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	int N;
	scanf("%d", &N);

	std::stack<int> stack1;
	std::stack<int> stack2;
	int arr[1000];

	for (int i = 0; i < N; i++)
	{
		int student;
		scanf("%d", &student);
		arr[i] = student;
	}

	for (int i = N - 1; i >= 0; i--)
	{
		stack1.push(arr[i]);
	}

	int i = 1;

	while (!stack1.empty()) {

		if (stack1.top() == i) {
			
			stack1.pop();
			
			i++;
		} 
		else if (!stack2.empty() && stack2.top() == i)
		{
			stack2.pop();

			i++;
		}
		else {
			stack2.push(stack1.top());
			stack1.pop();
		}

	}

	while (!stack2.empty()) {

		if (stack2.top() == i) {

			stack2.pop();

			i++;
		}
		else
		{
			printf("Sad");

			return 0;
		}

	}

	printf("Nice");

	return 0;
}