#include <algorithm>
#include <array>
#include <chrono>
#include <condition_variable>
#include <cstring>
#include <functional>
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <mutex>
#include <queue>
#include <stack>
#include <string>
#include <string.h>
#include <thread>
#include <vector>
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