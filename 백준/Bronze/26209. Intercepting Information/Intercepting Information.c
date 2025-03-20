#define _CRT_SECURE_NO_WARNINGS // C4996 오류 방지
#include <stdio.h>

int main()
{
    int arr[8];
    int F = 0;
    
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] != 0 && arr[i] != 1)
        {
            F++;
        }
    }

    if (F!=0)
    {
        printf("F");
    }
    else 
    {
        printf("S");
    }

    return 0;
}