#include <iostream>
#pragma warning(disable:4996) // scanf

int main() {

	int N;
	scanf("%d", &N);

	char str[12];
	scanf("%s", str);

	for (int i = 0; i < N; i++)
	{
		if (str[i] == 'g' && str[i + 1] == 'o' && str[i + 2] == 'r' && str[i + 3] == 'i') {
			printf("YES");

			return 0;
		}
	}

	printf("NO");

	return 0;
}
