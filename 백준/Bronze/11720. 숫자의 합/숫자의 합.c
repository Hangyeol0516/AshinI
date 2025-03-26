#define _CRT_SECURE_NO_WARNINGS // C4996 오류 방지
#include <stdio.h>
#include <stdlib.h>

int main() {

    int N;
    scanf("%d", &N);

    char arr[100];
    scanf("%s", arr);
    

    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        int num = ("%d", arr[i] - '0');
        sum += num;
    }

    printf("%d", sum);

    return 0;
}