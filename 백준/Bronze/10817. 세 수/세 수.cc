#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

#pragma warning(disable:4996) // scanf

int main() {

	int arr[3];
	for (int i = 0; i < 3; i++)
	{
		int num;
		scanf("%d", &num);
		arr[i] = num;
	}

	std::sort(arr, arr + 3);

	printf("%d", arr[1]);

	return 0;
}
