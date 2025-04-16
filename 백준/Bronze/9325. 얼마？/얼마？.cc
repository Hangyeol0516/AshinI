#include <iostream>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	int T;
	scanf("%d", &T);

	while (T--) {

		int opption = 0;

		int s;
		scanf("%d", &s);

		int n;
		scanf("%d", &n);

		for (int i = 0; i < n; i++)
		{
			int q, p;
			scanf("%d %d", &q, &p);
			opption += q * p;
		}

		printf("%d\n", opption + s);

	}

}