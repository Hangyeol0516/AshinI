#include <algorithm>
#include <cstring>
#include <iostream>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	int N;
	scanf("%d", &N);
	std::cin.ignore(); // 개행 문자 지우기

	for (int i = 1; i <= N; i++)
	{
		std::string str;
		std::getline(std::cin, str);

		std::cout << i << ". " << str << "\n";
	}

	return 0;
}