#include <algorithm>
#include <iostream>
#pragma warning(disable:4996) // scanf

int main() {

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	// 점수 계산
	if (a == b && b == c)
	{
		printf("%d", 10000 + a * 1000);
	}
	else if (a == b) {
		printf("%d", 1000 + a * 100);
	}
	else if (b == c) {
		printf("%d", 1000 + b * 100);
	}
	else if (a == c) {
		printf("%d", 1000 + c * 100);
	}
	else {
		printf("%d", std::max(a, std::max(b, c)) * 100); // 가장 높은 값을 구할 max 함수
	}

	return 0;
}