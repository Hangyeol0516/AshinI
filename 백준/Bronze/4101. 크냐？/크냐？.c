#include <stdio.h>

int main() {
    
    int a, b;

    while (1) {
        scanf("%d %d", &a, &b);
        if (a==0 & b==0) {
            break;
        }
        
        if (a <= b) {
            printf("No\n");
        } else {
            printf("Yes\n");
        }
    }
    
    return 0;
}