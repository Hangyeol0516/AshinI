#include <iostream>
#include <string>
#include <cstring>
#pragma warning(disable:4996) // scanf

int main() {

	int N;
	scanf("%d", &N);

	int changLife = 100;
	int sangLife = 100;

	for (int i = 0; i < N; i++)
	{
		int chang, sang;
		scanf("%d %d", &chang, &sang);

		if (chang > sang)
		{
			sangLife -= chang;
		}

		else if (chang < sang)
		{
			changLife -= sang;
		}
	}

	printf("%d\n%d", changLife, sangLife);

	return 0;
}