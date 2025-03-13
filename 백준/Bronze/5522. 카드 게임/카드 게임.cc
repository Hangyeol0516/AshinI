#include <stdio.h>

int main() {

    int A;
    int result = 0;

    for (int i=0; i < 5; i++) {
        scanf("%d", &A);
        result += A;
    }

    printf("%d", result);
       
    return 0;
}