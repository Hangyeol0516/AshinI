#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    for (int i=0; i<n; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        if (X >= Y) {
            printf("MMM BRAINS\n");
        } else {
            printf("NO BRAINS\n");
        }
    }
    
    return 0;
}