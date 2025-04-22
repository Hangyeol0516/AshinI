#include <cstring>
#include <iostream>
#include <set>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	int N, M;
	scanf("%d %d", &N, &M);

	std::set<std::string> set;

	for (int i = 0; i < N; i++)
	{
		std::string str;
		std::cin >> str;
		set.insert(str);
	}

	int count = 0;

	for (int i = 0; i < M; i++)
	{
		std::string str;
		std::cin >> str;
		
		if (set.find(str) != set.end())
		{
			count++;
		}
	}
	
	std::cout << count;

	return 0;
}