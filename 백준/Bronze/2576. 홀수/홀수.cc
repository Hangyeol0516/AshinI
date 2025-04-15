#include <algorithm>
#include <iostream>
#pragma warning(disable:4996) // scanf

int main() {
	
	int arr[7];
	
	int result = 0;
	
	for (int i = 0; i < 7; i++)
	{
		int num;
		scanf("%d", &num);
		arr[i] = num;
		
		if (arr[i] %2 == 1)
		{
			result += arr[i];
		}
	}

	if (result != 0) {

		std::sort(arr, arr + 7); // 가장 수가 낮은 숫자가 0자리로 오도록 정렬

		for (int i = 0; i < 7; i++)
		{
			if (arr[i] % 2 == 1) { // 만약 가장 작은 숫자가 짝수라면 다음으로 가장 작은 숫자를 검사
				printf("%d\n%d", result, arr[i]);
				return 0; // 반복문 중지
			}
		}
	}
	else {
		printf("%d", -1);
	}

	return 0;
}
