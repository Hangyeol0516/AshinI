#include <iostream>
#include <cstring>
#include <array>
#pragma warning(disable:4996)

int count(int width) {
	if (width == 136) return 1000;
	if (width == 142) return 5000;
	if (width == 148) return 10000;
	if (width == 154) return 50000;

	return 1;
}

int main() {

	int N;
	scanf("%d", &N);

	int result = 0;	
	
	for (int i = 0; i < N; i++)
	{
		int width, height;
		scanf("%d %d", &width, &height);

		result += count(width);
	}

	printf("%d", result);

	return 0;
}
