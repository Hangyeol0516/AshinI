#include <iostream>
#include <cstring>
#include <array>
#pragma warning(disable:4996)


unsigned long long result = 1;

unsigned long long factorial(int N) {
	
	if (N == 0)
	{
		return result;
	}

	result *= N;
	N--;

	return factorial(N);

}

int main() {

	int N;
	scanf("%d", &N);

	printf("%lld", factorial(N));

	return 0;
}
