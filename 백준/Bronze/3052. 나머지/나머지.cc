#include <algorithm>
#include <cstring>
#include <iostream>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	int arr[42] = { 0 };

	for (int i = 0; i < 10; i++)
	{
		int num;
		scanf("%d", &num);

		if (arr[num % 42] == 0)
		{
			arr[num%42]++;
		}

	}

	int result = 0;

	for (int i = 0; i < 42; i++)
	{
		result += arr[i];
	}

	printf("%d", result);

	return 0;
}