#include <iostream>
#pragma warning(disable:4996) // scanf

int main() {

	int result = 0;

	while (1) {

		int N;
		scanf("%d", &N);

		if (N == -1)
		{
			printf("%d", result);
			break;
		}

		result+= N;
	}

	return 0;

}
