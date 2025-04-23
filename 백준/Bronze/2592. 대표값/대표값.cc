#include <algorithm>
#include <cstring>
#include <iostream>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	int result = 0;
	int arr[100] = { 0 };

	for (int i = 0; i < 10; i++)
	{
		int num;
		scanf("%d", &num);

		result += num;
		arr[num / 10] ++;

	}

	printf("%d", result / 10);

	int max = 0, index = 0;

	for (int i = 0; i < 100; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			index = i;
		}
	}

	printf("\n%d", index * 10);

	return 0;
}