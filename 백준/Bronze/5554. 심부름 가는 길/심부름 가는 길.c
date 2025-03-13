#include <stdio.h>

int main() {

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    int x, y;
    x = (a + b + c + d) / 60;
    y = (a + b + c + d) % 60;

    printf("%d\n%d", x, y);
    
    return 0;
}