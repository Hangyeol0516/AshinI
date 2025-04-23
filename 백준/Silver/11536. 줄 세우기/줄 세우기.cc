#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector> 
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	int N;
	scanf("%d", &N);

	std::vector<std::string> vec;
	std::vector<std::string> temp;

	for (int i = 0; i < N; i++)
	{
		std::string str;
		std::cin >> str;

		vec.push_back(str);
		temp.push_back(str);
	}

	std::sort(temp.begin(), temp.end()); // 내림차순

	
	if (vec == temp)
	{
		printf("INCREASING");
		
		return 0;
	}

	std::reverse(temp.begin(), temp.end());

	if (vec == temp)
	{
		printf("DECREASING");
	}
	
	else
	{
		printf("NEITHER");
	}

	return 0;
}