#include <iostream>
#include <cstring>
#include <array>
#pragma warning(disable:4996)

int main() {

	int n;
	char arr[502];
	scanf("%d %s", &n, arr);

	for (int i = 0; i < n; i++)
	{
		if ((int)arr[i] < 97) {
			arr[i] += 32;
		}
		else {
			arr[i] -= 32;
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("%c", arr[i]);
	}

	return 0;
}