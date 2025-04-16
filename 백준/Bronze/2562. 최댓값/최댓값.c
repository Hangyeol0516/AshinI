#include <stdio.h>

int main() {
    
    int arr[9];

    for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        int num;
        scanf("%d", &num);
        arr[i] = num;
    }

    int max = arr[0];

    for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] >= max) {
            max = arr[i];
        }
    }

    printf("%d\n", max);

    int result = 0;

     for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] == max) {
            result = i+1;
        }
    }

    printf("%d", result);
    

    return 0;
}