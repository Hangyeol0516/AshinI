#include <iostream>
#include <cstring>
#pragma warning(disable:4996) //

int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        char arr[63];
        scanf("%s", arr);

        int len = strlen(arr) - 1;

        printf("%s\n", arr[len] % 2 == 0 ? "even" : "odd");
    }

    return 0;
}