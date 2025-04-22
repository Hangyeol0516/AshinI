#include <algorithm>
#include <cstring>
#include <iostream>
#include <map>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {
    // cin과 cout의 속도는 느리기에 동기화를 시켜 속도 상승
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int N, M;
	std::cin >> N >> M;

	std::map<std::string, std::string> pokemon;
	std::map<std::string, std::string> Number;

	for (int i = 1; i <= N; i++)
	{
		std::string name;
		std::cin >> name;

		pokemon[name] = std::to_string(i);
		Number[std::to_string(i)] = name;
	}

	for (int i = 0; i < M; i++)
	{
		std::string Q;
		std::cin >> Q;

		if (pokemon.find(Q) != pokemon.end())
		{
			std::cout << pokemon.at(Q) << '\n';
		}
		else if (Number.find(Q) != Number.end()) {
			std::cout << Number.at(Q) << '\n';
		}

	}

	return 0;
}