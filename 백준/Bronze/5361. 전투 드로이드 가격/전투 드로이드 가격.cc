#include <iostream>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	int T;
	scanf("%d", &T);

	while (T--) {
		int A, B, C, D, E;
		scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
	
		double result = 0;
		result += (A * 350.34) + (B * 230.90) + (C * 190.55) + (D * 125.30) + (E * 180.90);

		printf("$%.2f\n", result);
	}

}