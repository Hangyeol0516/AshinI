#include <stdio.h>

int main() {
    
    int N, M;
    scanf("%d %d", &N, &M);
    int arr[N];

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        arr[i] = 0;
    }

    for (int x = 0; x < M; x++) {
        int i, j, k;
        scanf("%d %d %d", &i, &j, &k);
        for (int y = i-1; y <= j-1; y++) {
            arr[y] = k;
        }
        
    }

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}