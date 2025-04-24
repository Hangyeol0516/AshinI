#include <algorithm>
#include <iostream>
int main() {
    
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);

	printf("%d", A + B + C - std::min({A, B, C}) - std::max({ A, B, C }));

	return 0;
}