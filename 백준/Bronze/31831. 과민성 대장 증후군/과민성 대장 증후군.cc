#include <iostream>
#pragma warning(disable:4996) // scanf

int main() {

	int N, M;
	scanf("%d %d", &N, &M);

	int Stress = 0, count = 0;

	for (int i = 0; i < N; i++)
	{
		int s;
		scanf("%d", &s);

		Stress += s;

		if (Stress < 0)
		{
			Stress = 0;
		}

		if (Stress >= M)
		{
			count++;
		}
	}

	printf("%d", count);

	return 0;
}
