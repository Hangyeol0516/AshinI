#include <iostream>
#include <cstring>
#include <array>
#pragma warning(disable:4996)

int main() {

	char arr[102];
	scanf("%s", arr);

	for (int i = 0; i < strlen(arr); i++)
	{
		if ((int)arr[i] < 97 && (int)arr[i] != 45) {
			printf("%c", arr[i]);
		}
	}

	return 0;
}