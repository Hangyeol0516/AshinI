#include <algorithm>
#include <cstring>
#include <iostream>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	char A[4];
	char B[4];
	scanf("%s", A);
	scanf("%s", B);
    
	std::reverse(A, A + 3);
	std::reverse(B, B + 3);

	if (A[0] == '0' && std::atoi(A) > std::atoi(B))
	{
		printf("0%d", std::atoi(A));
	}

	else if (B[0] == '0' && std::atoi(B) > std::atoi(A))
	{
		printf("0%d", std::atoi(B));
	}
	else 
	{
		printf("%d", std::atoi(A) > std::atoi(B) ? std::atoi(A) : std::atoi(B));
	}
	
	return 0;
}