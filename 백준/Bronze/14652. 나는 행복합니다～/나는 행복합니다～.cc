#include <iostream>
#pragma warning(disable:4996)

int main() {
	int N, M, K;
	scanf("%d %d %d", &N, &M, &K);

	printf("%d %d", K/M, K%M);

}
