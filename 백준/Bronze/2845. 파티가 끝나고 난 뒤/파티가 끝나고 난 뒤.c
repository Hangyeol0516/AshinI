#define _CRT_SECURE_NO_WARNINGS // C4996 오류 방지
#include <stdio.h>

int main() {

    int L, P;
    scanf("%d %d", &L, &P);
    
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    int x = L * P;
    printf("%d %d %d %d %d", a - x, b - x, c - x, d - x, e - x);

    return 0;
}