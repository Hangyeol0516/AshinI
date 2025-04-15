#include <cstdio>
#pragma warning(disable:4996) // Visual Studio에서 scanf 경고 무시

int main() {
	char name[12];
	int age, weight;

	while (1) {
		scanf("%s %d %d", name, &age, &weight);

		if (name[0] == '#' && age == 0 && weight == 0)
			return 0;

		if (age > 17 || weight >= 80)
			printf("%s Senior\n", name);
		else
			printf("%s Junior\n", name);
	}

	return 0;
}