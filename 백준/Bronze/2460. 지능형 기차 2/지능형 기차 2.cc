#include <iostream>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	int max = 0, count = 0;
	
	for (int i = 0; i < 10; i++)
	{
		int out, in;
		scanf("%d %d", &out, &in);

		count -= out;
		count += in;
		
		if (count > max)
		{
			max = count;
		}

	}

	printf("%d", max);

	return 0;
}