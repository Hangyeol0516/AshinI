#include <stdio.h>

int main() {

    int S, T;
    int a, b, c, d;
    int e, f, g, h;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    scanf("%d %d %d %d", &e, &f, &g, &h);

    S = a + b + c + d;
    T = e + f + g + h;

    printf("%d", S < T ? T : S);
    
    return 0;
}