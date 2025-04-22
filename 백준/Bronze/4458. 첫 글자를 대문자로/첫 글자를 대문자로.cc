#include <cstring>
#include <iostream>
#include <string>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	int N;
	scanf("%d", &N);
	getchar();

	for (int i = 0; i < N; i++)
	{
		char temp[100];
		fgets(temp, 100, stdin);

		if (temp[0] >= 'a' && temp[0] <= 'z')
		{
			temp[0] = (int)temp[0] - 32;
		}

		printf("%s", temp);
	}

	return 0;
}