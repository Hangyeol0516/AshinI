#define _CRT_SECURE_NO_WARNINGS // C4996 오류 방지
#include <stdio.h>

int main() {

	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		int r, e, c;
		scanf("%d %d %d", &r, &e, &c);

		if (r+c < e)
		{
			printf("advertise\n");
		}

		if (r + c > e)
		{
			printf("do not advertise\n");
		}

		if (r + c == e)
		{
			printf("does not matter\n");
		}
	}

    return 0;
}