#define _CRT_SECURE_NO_WARNINGS // C4996 오류 방지
#include <stdio.h>
#include <stdlib.h>

int main() {

    long long A, B;
    scanf("%lld %lld", &A, & B);

    printf("%lld", (A + B)*(A - B));

    return 0;
}