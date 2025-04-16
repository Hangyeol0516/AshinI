#include <iostream>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {
	
	int a, b;

	std::cin >> a >> b;
	std::cout << a + b << std::endl;

	return 0;
}