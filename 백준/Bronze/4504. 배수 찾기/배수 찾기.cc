#include <iostream>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {

	int n;
	scanf("%d", &n);
	
	while (1) { 
		int num;
		scanf("%d", &num);

		if (num == 0) return 0;

		if (num % n == 0)
		{
			printf("%d is a multiple of %d.\n", num, n);
		}
		else
		{
			printf("%d is NOT a multiple of %d.\n", num, n);
		}
	}
    
}