#include <stdio.h>

int main() {
    
    int N;
    scanf("%d", &N);
    
    int arr[N];

    for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        int num;
        scanf("%d", &num);
        arr[i] = num;
    }

    int high = arr[0];
    int low = arr[0];

    for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] >= high) {
            high = arr[i];
        }
        
        if (arr[i] <= low) {
            low = arr[i];
        }
    }

    printf("%d %d", low, high);
    

    return 0;
}