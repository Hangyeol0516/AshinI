#include <algorithm>
#include <iostream>
#pragma warning(disable:4996) // scanf

int main() {
	
	int N;
	scanf("%d", &N);

	int result[1000]; // 게임 참가자들의 각 점수들이 저장될 배열

	for (int i = 0; i < N; i++)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);

		// 점수 계산
		if (a == b && b == c)
		{
			result[i] = 10000 + a * 1000;
		}
		else if (a == b) {
			result[i] = 1000 + a * 100;
		}
		else if (b == c) {
			result[i] = 1000 + b * 100;
		}
		else if (a == c) {
			result[i] = 1000 + c * 100;
		}
		else {
			result[i] = std::max(a, std::max(b, c)) * 100; // 가장 높은 값을 구할 max 함수
		}

	}

	// 가장 많은 상금을 받은 사람 구하기
	int max = result[0];
	for (int i = 0; i < N; i++)
	{
		if (result[i] > max) {
			max = result[i];
		}
	}

	printf("%d", max);

	return 0;
}
