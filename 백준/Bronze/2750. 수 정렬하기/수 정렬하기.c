#define _CRT_SECURE_NO_WARNINGS // C4996 오류 방지
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int arr[1000];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}