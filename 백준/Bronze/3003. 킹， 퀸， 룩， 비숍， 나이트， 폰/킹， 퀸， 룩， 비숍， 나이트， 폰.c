#include <stdio.h>

int main() {
    // 내가 가지고 있는 유닛의 각 개수
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    // 필요한 양 - 내가 가지고 있는 유닛의 수 = 부족한 양
    printf("%d %d %d %d %d %d", 1-a, 1-b, 2-c, 2-d, 2-e, 8-f);
    
    return 0;
}