#include <iostream>
#include <cstring>
#pragma warning(disable:4996) // scanf

int main() {

	char str;
	scanf("%c", &str);
	
	if (str == 'N' || str == 'n')
	{
		printf("Naver D2");
	}
	else {
		printf("Naver Whale");
	}

	return 0;
}
