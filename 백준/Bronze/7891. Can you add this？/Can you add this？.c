#include <stdio.h>
int sum(int A, int B) {
	return A + B;
}

int main() {

	int t;
	scanf("%d", &t);

	while (t--) {
	
		int x, y;
		scanf("%d %d", &x, &y);

		printf("%d\n", sum(x, y));
	}

	return 0;
}