#include <algorithm>
#include <cstring>
#include <iostream>
#include <set>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int N, M;
	std::cin >> N >> M;

	std::set<std::string> set1;
	std::set<std::string> set2;

	for (int i = 0; i < N; i++)
	{
		std::string ear;
		std::cin >> ear;

		set1.insert(ear);
	}

	for (int i = 0; i < M; i++)
	{
		std::string eye;
		std::cin >> eye;

		set2.insert(eye);
	}

	int c = 0;

	// 교집합 원소 몇 개인지 카운트
	for (std::string item : set1)
	{
		if (set2.count(item)) {
			c++;
		}
	}

	std::cout << c << '\n';

	// 교집합 원소 출력
	for (std::string item : set1)
	{
		if (set2.count(item)) {
			std::cout << item << '\n';
		}
	}

	return 0;
}