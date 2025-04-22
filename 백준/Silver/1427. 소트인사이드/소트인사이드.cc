#include <algorithm> 
#include <cstdio>     
#include <string>    
#include <vector>     
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	int N;
	scanf("%d", &N);

	// 입력받은 정수 N을 String형으로 변경
	std::string temp = std::to_string(N);

	std::vector<int> vec;

	for (int i : temp)
	{
		vec.push_back(i - '0');
	}

	// 오름차순 정렬한 후 배열 뒤집기 -> 내림차순 정렬
	std::sort(vec.begin(), vec.end());
	std::reverse(vec.begin(), vec.end());
	
	for (auto itr = vec.begin(); itr != vec.end() ; ++itr)
	{
		printf("%d", *itr);
	}

	return 0;
}