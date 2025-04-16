#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);
    int arr[N];
    
    for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        int num;
        scanf("%d", &num);
        arr[i] = num;
    }
    
    int y;
    scanf("%d", &y);

    int result = 0;

    
    for (int i=0; i< sizeof(arr) / sizeof(arr[0]); i++) {
        if (arr[i] == y) {
            result ++;
        }
    }

    printf("%d", result);
    
    return 0;
}