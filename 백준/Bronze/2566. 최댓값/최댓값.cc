#include <iostream>
#include <cstring>
#pragma warning(disable:4996)

int main()
{
    int arr[9][9];

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			int num;
			scanf("%d", &num);

			arr[i][j] = num;
		}
	}

	int max = arr[0][0];
	int x = 0, y = 0;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (arr[i][j] >= max)
			{
				max = arr[i][j];
				x = i + 1;
				y = j + 1;
			}
		}
	}

	printf("%d\n%d %d", max, x, y);

    return 0;
}