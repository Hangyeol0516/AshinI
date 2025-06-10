#define _WINSOCK_DEPRECATED_NO_WARNINGS

#include <stdio.h>
#include <iostream>
#include <string>

int main() {

	int N;
	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		std::string str;
		std::cin >> str;

		if (str.compare("Algorithm") == 0) {
			std::cout << "204 \n";
		}
	
		if (str.compare("DataAnalysis") == 0) {
			std::cout << "207 \n";
		}
	
		if (str.compare("ArtificialIntelligence") == 0) {
			std::cout << "302 \n";
		}
	
		if (str.compare("CyberSecurity") == 0) {
			std::cout << "B101 \n";
		}
	
		if (str.compare("Network") == 0) {
			std::cout << "303 \n";
		}
	
		if (str.compare("Startup") == 0) {
			std::cout << "501 \n";
		}

		if (str.compare("TestStrategy") == 0) {
			std::cout << "105 \n";
		}

	}

	return 0;

}