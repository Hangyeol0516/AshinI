#include <iostream>
#include <cstring>
#include <array>
#pragma warning(disable:4996)

int main() {

	char arr[502];
	scanf("%s", arr);

	for (int i = 0; i < strlen(arr); i++)
	{
		if ((int)arr[i] < 97) {
			arr[i] += 32;
		}
		else {
			arr[i] -= 32;
		}
	}

	for (int i = 0; i < strlen(arr); i++)
	{
		printf("%c", arr[i]);
	}

	return 0;
}