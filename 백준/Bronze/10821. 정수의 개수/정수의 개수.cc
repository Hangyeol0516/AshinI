#include <iostream>
#include <cstring>
#include <array>
#pragma warning(disable:4996)

int main() {

	char arr[102];
	scanf("%s", arr);

	int result = 0;
	for (int i = 0; i < strlen(arr); i++)
	{

		if (arr[i] == ',')
		{
			result++;
		}
	}

	printf("%d", result + 1);

	return 0;
}
