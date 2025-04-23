#include <algorithm>
#include <cstring>
#include <iostream>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	
	int num = A * B * C;

	char arr[10]; // 999 x 999 x 999 = 억 (9자리);
	sprintf(arr, "%d", num);

	int numCount[11] = { 0 };

	for (int i = 0; i < 9; i++)
	{
		if (arr[i] == '0')
		{
			numCount[0]++;
		}
		if (arr[i] == '1')
		{
			numCount[1]++;
		}
		if (arr[i] == '2')
		{
			numCount[2]++;
		}
		if (arr[i] == '3')
		{
			numCount[3]++;
		}
		if (arr[i] == '4')
		{
			numCount[4]++;
		}
		if (arr[i] == '5')
		{
			numCount[5]++;
		}
		if (arr[i] == '6')
		{
			numCount[6]++;
		}
		if (arr[i] == '7')
		{
			numCount[7]++;
		}
		if (arr[i] == '8')
		{
			numCount[8]++;
		}
		if (arr[i] == '9')
		{
			numCount[9]++;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", numCount[i]);
	}

	return 0;
}