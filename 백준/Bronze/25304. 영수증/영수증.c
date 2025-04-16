#include <stdio.h>

int main() {

    int X, N;
    int result = 0;
    
    scanf("%d", &X);
    scanf("%d", &N);

    for (int i=1; i<=N; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        result += (a*b);
    }

    if (result == X) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}