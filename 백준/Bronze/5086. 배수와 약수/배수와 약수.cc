#include <iostream>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	while (1) {
		int x, y;
		scanf("%d %d", &x, &y);

		if (x == 0 && y == 0)
		{
			break;
		}
		else if (y % x == 0)
		{
			printf("factor\n");
		}
		else if (x % y == 0)
		{
			printf("multiple\n");
		}
		else
		{
			printf("neither\n");
		}
	}

	return 0;
}