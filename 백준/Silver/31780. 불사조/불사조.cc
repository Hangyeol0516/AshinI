#include <iostream>
#pragma warning(disable:4996) // scanf

int main() {

	int X, M;
	scanf("%d %d", &X, &M);

	if (M == 0) {
		printf("%d", X);
	}
	else {

		int temp;

		temp = X * (M + 1);

		printf("%d", temp);
	}

	return 0;

}
