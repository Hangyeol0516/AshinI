#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);

    int count = -1;
    while (N>=0) {
        count++;
        if (N-3 < 0) {
            N = N - 1;            
        } else {
            N = N - 3;
        }
    }

    if (count % 2 == 0) {
        printf("SK");
    } else {
        printf("CY");
    }
    
    return 0;
}