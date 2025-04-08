#include <iostream>
#include <cstring>
#include <array>
#include <algorithm>
#pragma warning(disable:4996)

int main() {

	int N;
	scanf("%d", &N);

	int cnt = 0;
	for (int i = 1; i <= 5; i++)
	{
		int num;
		scanf("%d", &num);

		if (num == N) {
			cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}