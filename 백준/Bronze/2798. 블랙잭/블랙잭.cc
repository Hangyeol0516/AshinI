#include <iostream>
#include <cstring>
#pragma warning(disable:4996)

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    int arr[102];

    for (int i = 0; i < N; i++)
    {
        int num;
        scanf("%d", &num);

        arr[i] = num;
    }

    int max = arr[0];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < N; k++)
            {
                if (arr[i] == arr[j] || arr[i] == arr[k] || arr[j] == arr[k]) {
                    continue;
                }

                if (arr[i] + arr[j] + arr[k] <= M && max <= arr[i] + arr[j] + arr[k]) {
                    max = arr[i] + arr[j] + arr[k];
                }
            }
        }
    }

    printf("%d", max);

    return 0;
}