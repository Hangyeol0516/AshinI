#define _CRT_SECURE_NO_WARNINGS // C4996 오류 방지
#include <stdio.h>
#include <stdlib.h>

int fun(int A, int B) {
    return (A + B) * (A - B);
}

int main() {

    int A, B;
    scanf("%d %d", &A, & B);

    printf("%d", fun(A, B));

    return 0;
}