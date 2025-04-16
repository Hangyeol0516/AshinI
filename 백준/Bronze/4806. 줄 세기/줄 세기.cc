#include <iostream>
#include <string>
#include <vector>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	std::string input;
	std::vector<std::string> vec;

	while (std::getline(std::cin, input)) {
		vec.push_back(input);
	}

	std::cout << vec.size() << std::endl;

}