#include <algorithm>
#include <iostream>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	int T;
	scanf("%d", &T);
	
	int arr[7] = { 0 };

	while (T--) {

		int result = 0;

		for (int i = 0; i < 7; i++)
		{
			int num;
			scanf("%d", &num);
			arr[i] = num;

			if (arr[i] % 2 == 0) result += arr[i];
		
		}

		printf("%d ", result);
		
		std::sort(arr, arr + 7);

		for (int i = 0; i < 7; i++)
		{
			if (arr[i] % 2 == 0) {
				printf("%d\n", arr[i]);
				break;
			}
		}

	}

	return 0;
}