#include <stdio.h>

int main() {

    int N;

    scanf("%d", &N);

    for (int i=1; i<=N/4; i++) {
        printf("long ");
    }

    printf("int");

    return 0;
}