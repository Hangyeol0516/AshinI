#include <algorithm>
#include <cstring>
#include <iostream>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	int T;
	scanf("%d", &T);

	while (T--) {

		int YResult = 0, KResult = 0;

		for (int i = 0; i < 9; i++)
		{
			int Y, K;
			scanf("%d %d", &Y, &K);
		
			YResult += Y;
			KResult += K;
		}

		if (YResult > KResult)
		{
			printf("Yonsei\n");
		}

		if (YResult < KResult)
		{
			printf("Korea\n");
		}

		if (YResult == KResult)
		{
			printf("Draw\n");
		}
	}
	
	return 0;
}