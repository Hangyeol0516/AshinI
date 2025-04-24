#include <algorithm>
#include <cstring>
#include <iostream>
#include <unordered_set>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int N;
	std::cin >> N;

	std::unordered_set<std::string> set;

	int count = 0;

	while (N--) {

		std::string flog;
		std::cin >> flog;
		
		if (flog == "ENTER")
		{
			set.clear();
		}
		else if (set.insert(flog).second) {
			count++;
		}
	}

	std::cout << count;

	return 0;
}