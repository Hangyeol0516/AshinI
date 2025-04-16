#include <stdio.h>

int main() {
    
    int N, M;
    scanf("%d %d", &N, &M);
    int arr[N];

    for (int i = 0; i <= sizeof(arr) / sizeof(arr[0]); i++) {
        arr[i] = i+1;
    }
    
    for (int x = 0; x < M; x++) {
        int i = 0 , j = 0;
        int temp = 0;
        scanf("%d %d", &i, &j);
        
        temp = arr[i-1];
        arr[i-1] = arr[j-1];
        arr[j-1] = temp;
    }

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}