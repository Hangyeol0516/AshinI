#include <iostream>
#include <cstring>
#include <array>
#include <algorithm>
#pragma warning(disable:4996)

int main() {

	int N;
	scanf("%d", &N);

	int arr[20002];
	int temp[20002];
	
	for (int i = 0; i < N; i++)
	{
		int num;
		scanf("%d", &num);
		arr[i] = num;
		temp[i] = num;
	}

	std::sort(temp, temp + N);

	int cnt = 0;
	for (int i = 0; i < N; i++)
	{
		if (temp[i] != arr[i]) {
			cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}