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
#include <unordered_map>
#include <type_traits>
#include <vector> 
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	int n;
	scanf("%d", &n);

	std::set<std::string> set;

	for (int i = 0; i < n; i++)
	{
		std::string name, record;
		std::cin >> name;
		std::cin >> record;

		set.insert(name);

		if (record == "enter" && set.find(name) == set.end())
		{
			set.insert(name);
		}

		if (record == "leave" && set.find(name) != set.end())
		{
			set.erase(name);
		}
		
	}

	for (auto itr = set.rbegin(); itr != set.rend(); ++itr)
	{
		std::cout << *itr << "\n";
	}

	return 0;
}