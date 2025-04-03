#include <iostream>
#include <cstring>
#pragma warning(disable:4996)

int main()
{
    int arr[10];

    for (int i = 0; i < 8; i++)
    {
        int num;
        scanf("%d", &num);

        arr[i] = num;
    }

    int sample1[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    int sample2[8] = { 8, 7, 6, 5, 4, 3, 2, 1 };

    int check = 0;

    for (int i = 0; i < 8; i++)
    {
        if (arr[i] == sample1[i]) check++;
        if (arr[i] == sample2[i]) check += 2;
    }

    if (check == 8) {
        printf("ascending");
    } 
    else if (check == 16) {
        printf("descending");
    }
    else {
        printf("mixed");
    }

    return 0;
}