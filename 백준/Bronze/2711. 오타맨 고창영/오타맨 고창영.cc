#include <algorithm>
#include <cstring>
#include <iostream>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	int T;
	scanf("%d", &T);

	while (T--) {
		int n;
		scanf("%d", &n);

		char str[81];
		scanf("%s", str);

		for (int i = 0; i < strlen(str); i++)
		{
			if (i == n - 1) {
				continue;
			}

			printf("%c", str[i]);
		}

		printf("\n");
	}

	return 0;
}