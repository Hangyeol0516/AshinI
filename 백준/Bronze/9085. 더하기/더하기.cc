#include <cstring>
#include <iostream>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	int T;
	scanf("%d", &T);

	while (T--) {
		int N;
		scanf("%d", &N);

		int result = 0;

		for (int i = 0; i < N; i++)
		{
			int num;
			scanf("%d", &num);

			result += num;
		}

		printf("%d\n", result);
	}

	return 0;
}