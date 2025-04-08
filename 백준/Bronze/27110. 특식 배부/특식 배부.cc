#include <iostream>
#include <cstring>
#include <array>
#pragma warning(disable:4996)

int main() {

	int N, A, B, C;
	scanf("%d %d %d %d", &N, &A, &B, &C);

	int result = 0;

	if (N >= A) {
		result += A;
	} else {
		result += N;
	}

	if (N >= B) {
		result += B;
	} else {
		result += N;
	}

	if (N >= C) {
		result += C;
	} else {
		result += N;
	}
	
	printf("%d", result);

	return 0;
}
