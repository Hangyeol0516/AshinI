#define _CRT_SECURE_NO_WARNINGS // C4996 오류 방지
#include <stdio.h>
#include <stdlib.h>

int main() {

    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int R;
        scanf("%d", &R);
        
        char S[20];
        scanf("%s", S);
        
        for (int j = 0; j < strlen(S); j++)
        {
            for (int k = 0;  k < R;  k++)
            {
                printf("%c", S[j]);
            }
        
        }
        printf("\n");
    }

    return 0;
}