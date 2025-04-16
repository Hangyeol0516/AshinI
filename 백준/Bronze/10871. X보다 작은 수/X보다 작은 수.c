#include <stdio.h>

int main() {

    int N, X;
    scanf("%d %d", &N, &X);

    int A[N];

    for(int i = 0; i < sizeof(A) / sizeof(A[0]); i++) {
        int num;
        scanf("%d", &num);
        A[i] = num;
    }

    int result = 0;
    
    for(int i = 0; i < sizeof(A) / sizeof(A[0]); i++) {
        if (A[i] < X) {
             printf("%d ", A[i]);
        }
    }
    
    return 0;
}