#include <iostream>
#pragma warning(disable:4996) // scanf

int main() {

	char sample[11];
	scanf("%s", sample);

	int N;
	scanf("%d", &N);

	int c = 0;

	for (int i = 0; i < N; i++)
	{
		char str[11];
		scanf("%s", str);

		if (str[0] == sample[0] && str[1] == sample[1] && str[2] == sample[2] && str[3] == sample[3] && str[4] == sample[4])
		{
			c++;
		}
	}

	printf("%d", c);

	return 0;
}
