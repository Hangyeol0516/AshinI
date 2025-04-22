#include <algorithm>
#include <array>
#include <chrono>
#include <condition_variable>
#include <cstring>
#include <deque>
#include <functional>
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <mutex>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <string.h>
#include <thread>
#include <type_traits>
#include <vector> 
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	int N;
	scanf("%d", &N);

	std::set<int> set;

	for (int i = 0; i < N; i++)
	{
		int num;
		scanf("%d", &num);
		
		set.insert(num);
	}

	int M;
	scanf("%d", &M);

	std::vector<int> vec(N);

	for (int i = 0; i < M; i++)
	{
		int num;
		scanf("%d", &num);

		if (set.find(num) != set.end()) {
			printf("%d ", 1);
		}
		else {
			printf("%d ", 0);
		}
	}

	return 0;
}