#define _CRT_SECURE_NO_WARNINGS // C4996 오류 방지
#include <stdio.h>

int main() {

	int m, d;
	scanf("%d %d", &m, &d);

	if (m==2 && d==18)
	{
		printf("Special");
	}
	else if (m == 2)
	{
		if (d <= 17)
		{
			printf("Before");
		}
		else
		{
			printf("After");
		}
	}
	else if (m < 2)
	{
		printf("Before");
	}
	else if (m > 2)
	{
		printf("After");
	}

    return 0;
}