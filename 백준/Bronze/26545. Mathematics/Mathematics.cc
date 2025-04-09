#include <iostream>
#include <string>
#include <cstring>
#pragma warning(disable:4996) // scanf

int main() {

	int N;
	scanf("%d", &N);

	int result = 0;
	for (int i = 0; i < N; i++)
	{
		int num;
		scanf("%d", &num);
		result += num;
	}

	printf("%d", result);

	return 0;
}
