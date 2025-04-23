#include <algorithm>
#include <cstring>
#include <iostream>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	int max = 0, winner = 0;

	for (int i = 0; i < 5; i++)
	{
		int result = 0;

		for (int j = 0; j < 4; j++) {
			int num;
			scanf("%d", &num);

			result += num;
		}
			
		if (result > max)
		{
			max = result;
			winner = i + 1;
		}

	}

	printf("%d %d", winner, max);

	return 0;
}