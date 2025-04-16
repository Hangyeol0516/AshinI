#include <iostream>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {


	for (int i = 0; i < 3; i++)
	{
		int result = 0;

		for (int j = 0; j < 4; j++)
		{
			int n;
			scanf("%d", &n);

			result += n;
		}

		if (result == 0)
		{
			printf("D");
		}
		else if (result == 1)
		{
			printf("C");
		}
		else if (result == 2)
		{
			printf("B");
		}
		else if (result == 3)
		{
			printf("A");
		}
		else if (result == 4)
		{
			printf("E");
		}

		printf("\n");

	}

	return 0;
}